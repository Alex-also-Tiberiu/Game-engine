#pragma once
#include <string>

namespace Time {

	/* - get current time in string format - */
	std::wstring OLYMPUS_API GetTime(BOOL stripped = FALSE);

	/* - get current date in string format - */
	std::wstring OLYMPUS_API GetDate(BOOL stripped = FALSE);

	/* - get current date and time in string format - */
	std::wstring OLYMPUS_API GetDateTimeString(BOOL stripped = FALSE);
}