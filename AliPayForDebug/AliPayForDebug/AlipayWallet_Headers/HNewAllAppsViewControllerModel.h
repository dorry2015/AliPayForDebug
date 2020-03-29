//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACTimeLimitInfo, HAppRecommendPopTipView, HDynamicInfoLottieView, HNewAllAppsViewControllerModelSectionInfo, NSArray, NSMutableArray;

@interface HNewAllAppsViewControllerModel : NSObject
{
    _Bool _duplicatesAllowed;
    _Bool _myAppsShowing;
    _Bool _editing;
    long long _homePageAppsCount;
    HDynamicInfoLottieView *_dynamicInfoLottieView;
    NSArray *_myApps;
    NSArray *_marketApps;
    NSArray *_myAppsSnapshotBeforeEditing;
    NSMutableArray *_displayingApps;
    HNewAllAppsViewControllerModelSectionInfo *_myAppsSectionInfo;
    HNewAllAppsViewControllerModelSectionInfo *_moreAppsSectionInfo;
    id _recommendItemData;
    HAppRecommendPopTipView *_recommendPopTipView;
    ACTimeLimitInfo *_appCenterTimeLimitInfo;
}

+ (_Bool)isRedPointRollback;
@property(retain, nonatomic) ACTimeLimitInfo *appCenterTimeLimitInfo; // @synthesize appCenterTimeLimitInfo=_appCenterTimeLimitInfo;
@property(retain, nonatomic) HAppRecommendPopTipView *recommendPopTipView; // @synthesize recommendPopTipView=_recommendPopTipView;
@property(retain, nonatomic) id recommendItemData; // @synthesize recommendItemData=_recommendItemData;
@property(retain, nonatomic) HNewAllAppsViewControllerModelSectionInfo *moreAppsSectionInfo; // @synthesize moreAppsSectionInfo=_moreAppsSectionInfo;
@property(retain, nonatomic) HNewAllAppsViewControllerModelSectionInfo *myAppsSectionInfo; // @synthesize myAppsSectionInfo=_myAppsSectionInfo;
@property(retain, nonatomic) NSMutableArray *displayingApps; // @synthesize displayingApps=_displayingApps;
@property(retain, nonatomic) NSArray *myAppsSnapshotBeforeEditing; // @synthesize myAppsSnapshotBeforeEditing=_myAppsSnapshotBeforeEditing;
@property(copy, nonatomic) NSArray *marketApps; // @synthesize marketApps=_marketApps;
@property(copy, nonatomic) NSArray *myApps; // @synthesize myApps=_myApps;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) HDynamicInfoLottieView *dynamicInfoLottieView; // @synthesize dynamicInfoLottieView=_dynamicInfoLottieView;
@property(nonatomic, getter=isMyAppsShowing) _Bool myAppsShowing; // @synthesize myAppsShowing=_myAppsShowing;
@property(nonatomic, getter=isDuplicatesAllowed) _Bool duplicatesAllowed; // @synthesize duplicatesAllowed=_duplicatesAllowed;
@property(nonatomic) long long homePageAppsCount; // @synthesize homePageAppsCount=_homePageAppsCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMyAppsEdited;
- (id)myAppsAppIDs;
- (void)reportBizMarkUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsRecommend;
- (_Bool)isLastTimeLimit;
- (id)exchangeAppIdInMyApps:(id)arg1 withAppIdInHomeApps:(id)arg2;
- (_Bool)shouldAddRedPointItemForAppId:(id)arg1;
- (id)deleteItemFromMyAppsAtIndexPathWhenNotEditing:(id)arg1;
- (id)insertItemToMyAppsAtIndexPathWhenNotEditing:(id)arg1;
- (long long)appItemInfoIndexToInsertFromAppCellModel:(id)arg1 inAppSectionModel:(id)arg2;
- (long long)categoryItemInfoIndexToInsertFromAppSectionModel:(id)arg1;
- (id)indexesToInsertFromAppSectionModel:(id)arg1 appCellModel:(id)arg2;
- (id)findDuplicatesToInsertWithAppSectionModel:(id)arg1 appCellModel:(id)arg2;
- (id)deleteItemFromMyAppsAtIndexPath:(id)arg1;
- (id)categoryItemInfoIndexPathFromAppItemInfo:(id)arg1;
- (id)findDuplicatesToDeleteWithAppSectionModel:(id)arg1 appCellModel:(id)arg2;
- (id)insertItemToMyAppsAtIndexPath:(id)arg1;
- (void)confirmReorder;
- (id)reorderMyAppsItemFromSourceIndexPath:(id)arg1 destinationIndexPath:(id)arg2;
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (_Bool)canMoveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (_Bool)isMovingItemToMoreAppsWithIndexPath:(id)arg1;
- (_Bool)canMoveItemAtIndexPath:(id)arg1;
- (id)endEditingIsConfirm:(_Bool)arg1;
- (void)beginEditing;
- (id)toggleMoreAppsShowing;
- (_Bool)isMoreAppsShowing;
- (id)toggleMyAppsShowing;
- (id)moreAppsIndexPath;
- (id)indexPathFromAppID:(id)arg1 stageCode:(id)arg2;
- (_Bool)isFirstCategory:(id)arg1;
- (_Bool)hasMyApps;
- (unsigned long long)indexForAppInMyApps:(id)arg1;
- (_Bool)isItemInMyApps:(id)arg1;
- (_Bool)isAppInMyApps:(id)arg1;
- (_Bool)isAppInHomePageApps:(id)arg1;
- (long long)numberOfAppsNotShowingOnHomePage;
- (id)itemInfoForIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)updateAppRecommendPopTipView:(id)arg1;
- (id)updateRecommendItemWithItemData:(id)arg1;
- (id)appsByCopyingApps:(id)arg1;
- (id)appsByRemovingDuplicatesFrom:(id)arg1 toApps:(id)arg2;
- (id)appCellModelsForAppRecommendActionType:(long long)arg1;
- (id)appsWithoutDuplicates;
- (id)redPointItemInfo;
- (id)createMoreAppsSectionIsEditing:(_Bool)arg1;
- (id)createMyAppsSectionIsEditing:(_Bool)arg1;
- (_Bool)addBizMarkModelToItems:(id)arg1;
- (_Bool)isHomeAppsContainBizMark;
- (void)addDynamicInfoLottieView;
- (void)addAppRecommendPopTipView;
- (void)reloadSectionsIsEditing:(_Bool)arg1;
- (void)reloadDisplayingAppsIsEditing:(_Bool)arg1;
- (void)reloadWithMyApps:(id)arg1 marketApps:(id)arg2 appCenterTimeLimitInfo:(id)arg3;

@end
