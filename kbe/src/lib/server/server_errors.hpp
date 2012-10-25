/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2012 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __SERVER_ERRORS_H__
#define __SERVER_ERRORS_H__

// common include
#include "cstdkbe/cstdkbe.hpp"
// windows include	
#if KBE_PLATFORM == PLATFORM_WIN32
#else
// linux include
#endif

namespace KBEngine { 

/**
	���������� ��Ҫ�Ƿ��������ظ��ͻ����õġ�
*/
	
typedef uint16 SERVER_ERROR_CODE;								// ���������


#define SERVER_SUCCESS								0			// �ɹ���
#define SERVER_ERR_SRV_NO_READY						1			// ������û��׼���á�
#define SERVER_ERR_SRV_OVERLOAD						2			// ���������ع��ء�
#define SERVER_ERR_ILLEGAL_LOGIN					3			// �Ƿ���¼��
#define SERVER_ERR_NAME_PASSWORD					4			// �û����������벻��ȷ��
#define SERVER_ERR_NAME								5			// �û�������ȷ��
#define SERVER_ERR_PASSWORD							6			// ���벻��ȷ��
#define SERVER_ERR_ACCOUNT_CREATE					7			// �����˺�ʧ�ܣ��Ѿ�����һ����ͬ���˺ţ���
#define SERVER_ERR_BUSY								8			// �������ڷ�æ(���磺�ڷ�����ǰһ������δִ����ϵ����������N�δ����˺�)��
#define SERVER_ERR_ANOTHER_LOGON					9			// ��ǰ�˺�����һ����¼�ˡ�
#define SERVER_ERR_ACCOUNT_ONLINE					10			// ���Ѿ���¼�ˣ� �������ܾ��ٴε�¼��

const char SERVER_ERR_STR[][256] = {
	"SERVER_SUCCESS",
	"SERVER_ERR_SRV_NO_READY",
	"SERVER_ERR_SRV_OVERLOAD",
	"SERVER_ERR_ILLEGAL_LOGIN",
	"SERVER_ERR_NAME_PASSWORD",
	"SERVER_ERR_NAME",
	"SERVER_ERR_PASSWORD",
	"SERVER_ERR_ACCOUNT_CREATE",
	"SERVER_ERR_BUSY",
	"SERVER_ERR_ANOTHER_LOGON",
	"SERVER_ERR_ACCOUNT_ONLINE"
};

}
#endif // __SERVER_ERRORS_H__