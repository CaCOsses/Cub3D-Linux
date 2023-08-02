
#include "../cub3d.h"

int	opendoor(t_display *display)
{
	if (display->map[display->mapi.y][display->mapi.x] == '8')
		display->map[display->mapi.y][display->mapi.x] = '0';
	if (display->map[display->mapi.y + 1][display->mapi.x] == '8')
		display->map[display->mapi.y + 1][display->mapi.x] = '0';
	if (display->map[display->mapi.y - 1][display->mapi.x] == '8')
		display->map[display->mapi.y - 1][display->mapi.x] = '0';
	if (display->map[display->mapi.y][display->mapi.x + 1] == '8')
		display->map[display->mapi.y][display->mapi.x + 1] = '0';
	if (display->map[display->mapi.y][display->mapi.x + 1] == '8')
		display->map[display->mapi.y][display->mapi.x + 1] = '0';
	return (0);
}
