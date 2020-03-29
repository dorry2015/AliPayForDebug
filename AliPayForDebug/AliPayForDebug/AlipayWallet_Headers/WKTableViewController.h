//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSHashTable, NSMutableSet, NSString, UIRefreshControl, UITableViewController, WKPagedControl, WKTableModel, WKWrapTableView;
@protocol WKTableViewControllerDelegate;

@interface WKTableViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isShouldFilterNotExistTemplate;
    _Bool _enablePagedControl;
    _Bool _isAutoHideKeyboard;
    id <WKTableViewControllerDelegate> _controllerDelegate;
    WKWrapTableView *_tableView;
    WKPagedControl *_pagedControl;
    WKTableModel *_dataModel;
    NSMutableSet *_existsTemplateIdSets;
    NSMutableSet *_unExistsTemplateIdSets;
    WKTableModel *_realDataModel;
    UITableViewController *_refreshControlTableViewController;
    UIRefreshControl *_refreshControl;
    NSHashTable *_cellCache;
    NSString *_pageLoadingTipsText;
}

+ (id)instanceFromListModel:(id)arg1;
+ (id)instanceFromSingleSection:(id)arg1;
+ (id)instanceFromCellArray:(id)arg1;
+ (id)instanceFromObjects:(id)arg1 templateId:(id)arg2;
@property(retain, nonatomic) NSString *pageLoadingTipsText; // @synthesize pageLoadingTipsText=_pageLoadingTipsText;
@property(retain, nonatomic) NSHashTable *cellCache; // @synthesize cellCache=_cellCache;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UITableViewController *refreshControlTableViewController; // @synthesize refreshControlTableViewController=_refreshControlTableViewController;
@property(retain) WKTableModel *realDataModel; // @synthesize realDataModel=_realDataModel;
@property(retain, nonatomic) NSMutableSet *unExistsTemplateIdSets; // @synthesize unExistsTemplateIdSets=_unExistsTemplateIdSets;
@property(retain, nonatomic) NSMutableSet *existsTemplateIdSets; // @synthesize existsTemplateIdSets=_existsTemplateIdSets;
@property(nonatomic) _Bool isAutoHideKeyboard; // @synthesize isAutoHideKeyboard=_isAutoHideKeyboard;
@property(nonatomic) _Bool enablePagedControl; // @synthesize enablePagedControl=_enablePagedControl;
@property(retain, nonatomic) WKTableModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) WKPagedControl *pagedControl; // @synthesize pagedControl=_pagedControl;
@property(retain, nonatomic) WKWrapTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic, setter=setFilterNotExistTemplate:) _Bool isShouldFilterNotExistTemplate; // @synthesize isShouldFilterNotExistTemplate=_isShouldFilterNotExistTemplate;
@property(nonatomic) __weak id <WKTableViewControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
- (void).cxx_destruct;
- (void)templateDidLoadedFromServer:(id)arg1;
- (_Bool)handleEvent:(id)arg1 sender:(id)arg2 doc:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pagedEventFired:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)reloadDataAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)refreshEventRecieved:(id)arg1;
- (void)setupRefreshControl;
- (void)setupTableFooterView;
- (void)setupPagedControl;
- (void)setupTableHeaderView;
- (void)filterNotExistTemplate;
- (id)templateIdSetsFromDataModel:(id)arg1;
- (id)templateIdExistsFilter:(id)arg1;
- (void)setLoadingTipsText:(id)arg1;
@property(nonatomic) _Bool enableRefreshConrol;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)observeNotifications;
- (void)handleTemplateUpdateNotification:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
