//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBMonitor : NSObject
{
}

+ (void)templateDowngradeMonitor:(id)arg1 index:(long long)arg2 templateId:(id)arg3 msgId:(id)arg4;
+ (void)deleteAllMsgMonitor:(unsigned long long)arg1;
+ (void)switchNotifChangeMonitor:(id)arg1;
+ (void)menuClickMonitor:(id)arg1 index:(long long)arg2 menuType:(int)arg3 appType:(unsigned long long)arg4;
+ (id)mbExtDic:(id)arg1 sourceId:(id)arg2;
+ (void)MBMessageMenuMonitor:(long long)arg1 menuIndex:(long long)arg2 menuName:(id)arg3 menuType:(id)arg4 message:(id)arg5 sourceId:(id)arg6 isClick:(_Bool)arg7;
+ (void)MBMessageHearderMonitor:(long long)arg1 message:(id)arg2 sourceId:(id)arg3 isClick:(_Bool)arg4;
+ (void)MBMessageMonitor:(long long)arg1 message:(id)arg2 sourceId:(id)arg3 msgPage:(id)arg4 isClick:(_Bool)arg5;
+ (void)MBMessageDeleteButton:(long long)arg1 message:(id)arg2 sourceId:(id)arg3 isClick:(_Bool)arg4;
+ (void)MBMessageUnSubscribeButton:(long long)arg1 message:(id)arg2 sourceId:(id)arg3 isClick:(_Bool)arg4;
+ (void)MBMessageMoreButton:(long long)arg1 message:(id)arg2 sourceId:(id)arg3 isClick:(_Bool)arg4;
+ (void)MBUnSubscribeDoubleCheckCancel:(long long)arg1 message:(id)arg2 sourceId:(id)arg3;
+ (void)MBUnSubscribeDoubleCheckConfirm:(long long)arg1 message:(id)arg2 sourceId:(id)arg3;
+ (void)MBSettingNewMsgNoticeSwithClick:(id)arg1;
+ (void)MBSubscribeDoubleCheckCancel:(long long)arg1 serviceCode:(id)arg2 bizName:(id)arg3;
+ (void)MBSubscribeDoubleCheckConfirm:(long long)arg1 serviceCode:(id)arg2 bizName:(id)arg3;
+ (void)MBSubscribeClick:(long long)arg1 serviceCode:(id)arg2 bizName:(id)arg3;
+ (void)MBUnSubscribeRecordsExposure:(long long)arg1 serviceCode:(id)arg2 bizName:(id)arg3;
+ (void)MBManagerVCPageMonitorMonitorEnd:(id)arg1;
+ (void)MBManagerVCPageMonitorStart:(id)arg1;
+ (void)cleanAllMsgDoubleCheckCancle;
+ (void)cleanAllMsgDoubleCheckConfirm;
+ (void)msgManagerButtonClick;
+ (void)home_clickSettingBtn:(id)arg1;
+ (void)home_clickGuide:(id)arg1 viewId:(id)arg2;
+ (void)home_exposureGuide:(id)arg1 viewId:(id)arg2;
+ (void)home_clickNoticeAlertCancel:(id)arg1;
+ (void)home_clickNoticeAlertOK:(id)arg1;
+ (void)home_clickNoticeSwitch:(id)arg1;
+ (void)home_exposureNoticeSwitch:(id)arg1;
+ (void)home_exposureAssistRedPoint:(id)arg1 assistName:(id)arg2 redPointType:(id)arg3 redPointDetail:(id)arg4 index:(unsigned long long)arg5 viewId:(id)arg6;
+ (void)home_clickAssistView:(id)arg1 assistId:(id)arg2 assistName:(id)arg3 redPointType:(id)arg4 redPointDetail:(id)arg5 index:(unsigned long long)arg6 viewId:(id)arg7;
+ (void)home_exposureAssistView:(id)arg1 assistId:(id)arg2 assistName:(id)arg3 index:(unsigned long long)arg4 viewId:(id)arg5;
+ (void)home_pageEnd:(id)arg1 sourceId:(id)arg2 unreadCount:(long long)arg3;
+ (void)home_pageStart:(id)arg1;
+ (void)assist_exposureBizHomeBtn:(id)arg1 scm:(id)arg2 viewId:(id)arg3;
+ (void)assist_clickBizHomeBtn:(id)arg1 scm:(id)arg2 viewId:(id)arg3;
+ (void)assist_clickSettingBtn:(id)arg1 assistName:(id)arg2 viewId:(id)arg3;
+ (void)assist_clickMenu:(id)arg1 assistId:(id)arg2 assistName:(id)arg3 menuName:(id)arg4 type:(id)arg5 scm:(id)arg6 viewId:(id)arg7;
+ (void)assist_exposureMenu:(id)arg1 assistId:(id)arg2 assistName:(id)arg3 menuName:(id)arg4 type:(id)arg5 scm:(id)arg6 viewId:(id)arg7;
+ (void)assist_clickExtendAreaBtn:(id)arg1 assistId:(id)arg2 assistName:(id)arg3 displayState:(id)arg4 viewId:(id)arg5;
+ (void)assist_exposureExtendAreaBtn:(id)arg1 assistId:(id)arg2 assistName:(id)arg3 viewId:(id)arg4;
+ (void)assist_exposureExtendArea:(id)arg1 assistId:(id)arg2 assistName:(id)arg3 viewId:(id)arg4;
+ (void)assist_pageEnd:(id)arg1 sourceId:(id)arg2 assistId:(id)arg3 assistName:(id)arg4;
+ (void)assist_pageStart:(id)arg1;
+ (void)assistSetting_clickClearAlertCancel:(id)arg1 assistName:(id)arg2 viewId:(id)arg3;
+ (void)assistSetting_clickClearAlertOK:(id)arg1 assistName:(id)arg2 viewId:(id)arg3;
+ (void)assistSetting_clickClearBtn:(id)arg1 assistName:(id)arg2 viewId:(id)arg3;
+ (void)assistSetting_clickBizSpecialBtn:(id)arg1 buttonName:(id)arg2 buttonLink:(id)arg3 viewId:(id)arg4;
+ (void)assistSetting_exposureBizSpecialBtn:(id)arg1 buttonName:(id)arg2 buttonLink:(id)arg3 viewId:(id)arg4;
+ (void)assistSetting_clickNewMessageRemind:(id)arg1 newstatus:(id)arg2 viewId:(id)arg3;
+ (void)assistSetting_exposureNewMessageRemind:(id)arg1 viewId:(id)arg2;
+ (void)assistSetting_clickSubscribeManage:(id)arg1 viewId:(id)arg2;
+ (void)assistSetting_exposureSubscribeManage:(id)arg1 viewId:(id)arg2;
+ (void)assistSetting_pageEnd:(id)arg1 assistId:(id)arg2 assistName:(id)arg3;
+ (void)assistSetting_pageStart:(id)arg1;
+ (void)subscribeComponent_clickDialogCancel:(id)arg1 viewId:(id)arg2;
+ (void)subscribeComponent_clickDialogOK:(id)arg1 viewId:(id)arg2;
+ (void)subscribeComponent_exposureDialog:(id)arg1 viewId:(id)arg2;
+ (void)subscribeComponent_pageEnd:(id)arg1 serviceCode:(id)arg2;
+ (void)subscribeComponent_pageStart:(id)arg1;
+ (void)event_msgboxSubscribe:(id)arg1 sourceAppId:(id)arg2 refererURL:(id)arg3 serviceCode:(id)arg4 resultCode:(id)arg5 resultDesc:(id)arg6 version:(id)arg7;
+ (void)event_commonDBClearReport:(long long)arg1 clear_msg_count:(long long)arg2 cached_sc:(id)arg3;
+ (void)event_localDataStatusReport:(long long)arg1 cu_trade_msg_count:(long long)arg2 cu_common_msg_count:(long long)arg3 cu_common_msg_not_in_sc_count:(long long)arg4 cached_sc:(id)arg5;
+ (void)message_clickMorePaymentViewId:(id)arg1;
+ (void)message_exposureMorePaymentViewId:(id)arg1;
+ (void)message_clickMoreMenuItem:(long long)arg1 params:(id)arg2 viewId:(id)arg3;
+ (void)message_clickUnsubscribeConfirm:(long long)arg1 params:(id)arg2 viewId:(id)arg3;
+ (void)message_clickDelete:(long long)arg1 params:(id)arg2 viewId:(id)arg3;
+ (void)message_clickHeader:(long long)arg1 scm:(id)arg2 params:(id)arg3 viewId:(id)arg4;
+ (void)message_exposureHeader:(long long)arg1 scm:(id)arg2 params:(id)arg3 viewId:(id)arg4;
+ (void)message_clickCell:(long long)arg1 scm:(id)arg2 params:(id)arg3 viewId:(id)arg4;
+ (void)message_exposureCell:(long long)arg1 scm:(id)arg2 params:(id)arg3 viewId:(id)arg4;
+ (void)assistSubscribeManagePage_clickSubscribeCancel:(id)arg1 bizName:(id)arg2 assistId:(id)arg3 object:(id)arg4;
+ (void)assistSubscribeManagePage_clickSubscribeOK:(id)arg1 bizName:(id)arg2 assistId:(id)arg3 object:(id)arg4;
+ (void)assistSubscribeManagePage_clickSubscribe:(id)arg1 bizName:(id)arg2 assistId:(id)arg3 object:(id)arg4;
+ (void)assistSubscribeManagePage_pageEnd:(id)arg1 assistId:(id)arg2;
+ (void)assistSubscribeManagePage_pageStart:(id)arg1;

@end
