//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MOBILECSADetailPayInfo, NSDictionary, NSString, O2OMerchantAlertResultManager, O2OMerchantApplyPayModel, O2OMerchantGoToBuyModel, O2OMerchantItemCheckModel, O2OMerchantPayItem, O2OMerchantProtocolItem, O2OTimerWrapper, UIView, UIViewController;
@protocol O2OMerchantPayInfoManagerDelegate;

@interface O2OMerchantPayInfoManager : NSObject
{
    double _mistakeTime;
    double _setMistakeTimeForSystemTime;
    _Bool _needQueryGotoBuyUrl;
    _Bool _queryGotoBuyUrlFinish;
    UIViewController *_controller;
    O2OMerchantPayItem *_payItem;
    UIView *_controllerView;
    O2OMerchantProtocolItem *_protocolItem;
    NSDictionary *_shopInfo;
    NSString *_shopId;
    NSDictionary *_monitorDic;
    NSString *_logBtnTitle;
    NSString *_codeId;
    NSString *_bizScene;
    NSString *_tableNo;
    id <O2OMerchantPayInfoManagerDelegate> _delegate;
    MOBILECSADetailPayInfo *_payInfo;
    O2OTimerWrapper *_timerWrapper;
    O2OMerchantItemCheckModel *_itemCheckModel;
    O2OMerchantGoToBuyModel *_goToBuyModel;
    O2OMerchantApplyPayModel *_applyPayModel;
    O2OMerchantAlertResultManager *_alertResultManager;
    NSString *_applyItemId;
    NSString *_gotoBuyUrl;
    NSString *_detailPayUrl;
    CDUnknownBlockType _applyAfterBlock;
    CDUnknownBlockType _checkAfterBlock;
    double _lastClickTime;
}

@property(nonatomic) double lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(copy, nonatomic) CDUnknownBlockType checkAfterBlock; // @synthesize checkAfterBlock=_checkAfterBlock;
@property(copy, nonatomic) CDUnknownBlockType applyAfterBlock; // @synthesize applyAfterBlock=_applyAfterBlock;
@property(retain, nonatomic) NSString *detailPayUrl; // @synthesize detailPayUrl=_detailPayUrl;
@property(retain, nonatomic) NSString *gotoBuyUrl; // @synthesize gotoBuyUrl=_gotoBuyUrl;
@property(nonatomic) _Bool queryGotoBuyUrlFinish; // @synthesize queryGotoBuyUrlFinish=_queryGotoBuyUrlFinish;
@property(retain, nonatomic) NSString *applyItemId; // @synthesize applyItemId=_applyItemId;
@property(retain, nonatomic) O2OMerchantAlertResultManager *alertResultManager; // @synthesize alertResultManager=_alertResultManager;
@property(retain, nonatomic) O2OMerchantApplyPayModel *applyPayModel; // @synthesize applyPayModel=_applyPayModel;
@property(retain, nonatomic) O2OMerchantGoToBuyModel *goToBuyModel; // @synthesize goToBuyModel=_goToBuyModel;
@property(retain, nonatomic) O2OMerchantItemCheckModel *itemCheckModel; // @synthesize itemCheckModel=_itemCheckModel;
@property(retain, nonatomic) O2OTimerWrapper *timerWrapper; // @synthesize timerWrapper=_timerWrapper;
@property(retain, nonatomic) MOBILECSADetailPayInfo *payInfo; // @synthesize payInfo=_payInfo;
@property(nonatomic) __weak id <O2OMerchantPayInfoManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *tableNo; // @synthesize tableNo=_tableNo;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSString *codeId; // @synthesize codeId=_codeId;
@property(retain, nonatomic) NSString *logBtnTitle; // @synthesize logBtnTitle=_logBtnTitle;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSDictionary *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(retain, nonatomic) O2OMerchantProtocolItem *protocolItem; // @synthesize protocolItem=_protocolItem;
@property(nonatomic) __weak UIView *controllerView; // @synthesize controllerView=_controllerView;
@property(retain, nonatomic) O2OMerchantPayItem *payItem; // @synthesize payItem=_payItem;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)putRidSid:(id)arg1;
- (_Bool)alertWarning;
- (void)jumpPayUrl;
- (void)queryGotoBuyUrl;
- (void)resetStatus;
- (void)applyDiscount:(id)arg1;
- (void)checkDiscountCanUse:(id)arg1 url:(id)arg2 checkFlag:(_Bool)arg3;
- (void)payActionAfterProtocol;
- (void)payAction;
- (void)updateTitle4Time;
- (void)checkTime;
- (void)saveData:(id)arg1;
- (void)dealloc;

@end

