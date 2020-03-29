//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBDataManager-Protocol.h"
#import "HCADBannerDelegate-Protocol.h"

@class CCard, CategoryPBVO_DBManager, DTRpcAsyncCaller, HCADBannerManager, HCElevatorInfo, HCRecInfo, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSString, membertangramUserRpc;

@interface HCHomeDataManager : NSObject <HCADBannerDelegate, CBDataManager>
{
    NSString *_HCHomeDataManagerRefreshTime;
    NSString *_lastMessageJsonString;
    NSArray *_categoryCards;
    HCADBannerManager *_adBannerManager;
    HCRecInfo *_recInfo;
    HCElevatorInfo *_elevatorInfo;
    NSString *_antmemberUserType;
    NSDictionary *_responseExt;
    CategoryPBVO_DBManager *_categoryDBManager;
    CCard *_messageCard;
    CCard *_advertCard;
    NSArray *_cardList;
    NSHashTable *_observerList;
    DTRpcAsyncCaller *_refreshRPC;
    NSMutableArray *_refreshRPCCallbacks;
    DTRpcAsyncCaller *_loadMoreRPC;
    NSMutableArray *_loadMoreRPCCallbacks;
    membertangramUserRpc *_xiaohuarpc;
}

+ (id)shared;
@property(retain, nonatomic) membertangramUserRpc *xiaohuarpc; // @synthesize xiaohuarpc=_xiaohuarpc;
@property(retain, nonatomic) NSMutableArray *loadMoreRPCCallbacks; // @synthesize loadMoreRPCCallbacks=_loadMoreRPCCallbacks;
@property(retain, nonatomic) DTRpcAsyncCaller *loadMoreRPC; // @synthesize loadMoreRPC=_loadMoreRPC;
@property(retain, nonatomic) NSMutableArray *refreshRPCCallbacks; // @synthesize refreshRPCCallbacks=_refreshRPCCallbacks;
@property(retain, nonatomic) DTRpcAsyncCaller *refreshRPC; // @synthesize refreshRPC=_refreshRPC;
@property(retain, nonatomic) NSHashTable *observerList; // @synthesize observerList=_observerList;
@property(copy, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
@property(retain, nonatomic) CCard *advertCard; // @synthesize advertCard=_advertCard;
@property(retain, nonatomic) CCard *messageCard; // @synthesize messageCard=_messageCard;
@property(retain, nonatomic) CategoryPBVO_DBManager *categoryDBManager; // @synthesize categoryDBManager=_categoryDBManager;
@property(retain, nonatomic) NSDictionary *responseExt; // @synthesize responseExt=_responseExt;
@property(retain, nonatomic) NSString *antmemberUserType; // @synthesize antmemberUserType=_antmemberUserType;
@property(retain, nonatomic) HCElevatorInfo *elevatorInfo; // @synthesize elevatorInfo=_elevatorInfo;
@property(retain, nonatomic) HCRecInfo *recInfo; // @synthesize recInfo=_recInfo;
@property(retain, nonatomic) HCADBannerManager *adBannerManager; // @synthesize adBannerManager=_adBannerManager;
@property(copy, nonatomic) NSArray *categoryCards; // @synthesize categoryCards=_categoryCards;
- (void).cxx_destruct;
- (void)showDialogWithInfo:(id)arg1;
- (_Bool)cardForColumnIsHidable:(id)arg1;
- (id)hideMenuForCard:(id)arg1;
- (void)bannerManager:(id)arg1 didChangeBannerView:(id)arg2;
- (void)showCloseXiaohuaErrorCard;
- (void)closeXiaohuaUserTagRpc:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)regConfigChangedNotification:(id)arg1;
- (void)accountDidExitNotification:(id)arg1;
- (void)messageboxDataChangeNotification:(id)arg1;
- (void)fetchCardsInPage:(id)arg1 params:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)loadMoreCardsInPage:(id)arg1 params:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
@property(readonly) _Bool hasMore;
- (void)removeDataObserver:(id)arg1;
- (void)addDataObserver:(id)arg1;
- (void)justReloadData;
- (void)resetMessageCard:(id)arg1;
- (void)cleanDataExceptMsgBox;
- (void)cleanData;
- (void)invokeCallbacks:(id)arg1 error:(id)arg2;
- (void)addCallback:(CDUnknownBlockType)arg1 toArray:(id)arg2;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)refreshMergedHomeCardList:(unsigned long long)arg1;
- (_Bool)shouldShowADBanner;
- (void)resetMessageCard;
- (_Bool)hasMessageCard;
- (void)cleanNewMessage;
- (_Bool)hasNewMessage;
- (void)loadDBDataInPage:(id)arg1 params:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)loadDBCategoryCardsForPage:(id)arg1;
- (id)loadCachedMessageCard;
- (void)refreshHomeListWithLocation:(id)arg1 duringLaunch:(_Bool)arg2 refreshMode:(id)arg3 immediately:(_Bool)arg4 page:(id)arg5 onComplete:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;
- (_Bool)isAntmemberUser00;
- (void)addOrUpdateHomeCard:(id)arg1 templateFailedCard:(id)arg2 categoryCardlist:(id)arg3;
- (void)updateCategoryCards:(id)arg1;
- (void)removeCardWithIDList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
