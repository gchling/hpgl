/**
 * \file locale_keeper.h
 * \brief Helper class for set locale and reset locale on dtor
 * \author Miryanov Sergey
 * \date 14.04.2008
 */

#ifndef BS_LOCALE_KEEPER_H_
#define BS_LOCALE_KEEPER_H_

#include <locale.h>

namespace blue_sky {

  struct locale_keeper
  {
	  std::string locale_;
    int category_;

    locale_keeper (const char *new_name, int category_=LC_ALL)
      : category_ (category_)
    {
      locale_ = setlocale (category_, 0);
      setlocale (category_, new_name);
    }

    ~locale_keeper()
    {
      setlocale (category_, locale_.c_str());
    }
  };

}

#endif // #ifndef BS_LOCALE_KEEPER_H_
