//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APVAGroupRecord, APVAMainViewController, NSDictionary, NSMutableArray, VALoadingView, WKTableModel;

@interface APVADomainManager : NSObject
{
    _Bool _isRpcLoading;
    APVAMainViewController *_mainController;
    NSDictionary *_queryInfo;
    WKTableModel *_currentWkTableModel;
    NSMutableArray *_cacheSectionArray;
    VALoadingView *_loadingCell;
    APVAGroupRecord *_group;
}

@property(retain, nonatomic) APVAGroupRecord *group; // @synthesize group=_group;
@property(retain, nonatomic) VALoadingView *loadingCell; // @synthesize loadingCell=_loadingCell;
@property(retain, nonatomic) NSMutableArray *cacheSectionArray; // @synthesize cacheSectionArray=_cacheSectionArray;
@property(retain, nonatomic) WKTableModel *currentWkTableModel; // @synthesize currentWkTableModel=_currentWkTableModel;
@property(nonatomic) _Bool isRpcLoading; // @synthesize isRpcLoading=_isRpcLoading;
@property(retain, nonatomic) NSDictionary *queryInfo; // @synthesize queryInfo=_queryInfo;
@property(nonatomic) __weak APVAMainViewController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (void)resultClickedByEventData:(id)arg1;
- (void)resultClicked:(id)arg1;
- (void)hCellClicked:(id)arg1;
- (void)viewContrillerBecomeActive:(id)arg1;
- (void)refreshResultBySubmitInfo:(id)arg1;
- (void)reloadWKDataModel;
- (void)resumeDataModel;
- (void)scrollViewToTop:(_Bool)arg1;
- (void)scrollViewToBottom:(_Bool)arg1;
- (void)updateWkTabelModelWithCellModels:(id)arg1 needCache:(_Bool)arg2;
- (void)updateWkAnswerModel:(id)arg1 needCache:(_Bool)arg2;
- (void)updateLoadingModel;
- (void)updateWkSpeakerModel:(id)arg1 isSameSeaaion:(_Bool)arg2;
- (void)deleteLastLoadingCell;
- (void)deleteLastSpeakerCellIfCancel;
- (_Bool)noCacheSection:(id)arg1;
- (void)updateCacheSectionsWithCells:(id)arg1 needCache:(_Bool)arg2;
- (void)replaceSectionsWithCells:(id)arg1 cardId:(id)arg2;
- (_Bool)isMoreQuery;
- (id)removeTagForQuery:(id)arg1 leftTag:(id)arg2 rightTag:(id)arg3;
- (void)invokeTransferWithWkModel:(id)arg1 jumpType:(id)arg2;
- (void)invokeTransferWithModel:(id)arg1;
- (_Bool)validUserInfo:(id)arg1 iphoneNum:(id)arg2;
- (id)validTransferHits:(id)arg1;
- (void)invokeGiftWithGroupRecord:(id)arg1 trace:(id)arg2;
- (void)invokeSpeechTransferWithGroupRecord:(id)arg1 trace:(id)arg2;
- (void)invokeTransferWithRecord:(id)arg1 resetIsUserApi:(_Bool)arg2;
- (void)invokeGotoCommonWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeGotoSpeechTransferWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeGotoTransferWithHits:(id)arg1 trace:(id)arg2;
- (void)invokeAppWithGroupRecord:(id)arg1;
- (id)appCellModelByAPVAHit:(id)arg1;
- (void)updatePageAppDataWithRecord:(id)arg1;
- (void)updateAppsResultWihtRecode:(id)arg1;
- (void)updateAnswerCellWithText:(id)arg1 needCache:(_Bool)arg2;
- (void)updateAnswerCellWithModel:(id)arg1 needCache:(_Bool)arg2;
- (_Bool)doActionByType:(id)arg1;
- (void)updateGroupRecord:(id)arg1 isSameSession:(_Bool)arg2 queryText:(id)arg3;
- (void)updateAsiOut:(id)arg1 isSameSession:(_Bool)arg2;
- (void)updateSpeackerCell:(id)arg1 isSameSeaaion:(_Bool)arg2 needCache:(_Bool)arg3;
- (void)updateAsrOut:(id)arg1 isSameSession:(_Bool)arg2;
- (void)dealloc;
- (void)h5BackNoti:(id)arg1;
- (id)init;

@end
