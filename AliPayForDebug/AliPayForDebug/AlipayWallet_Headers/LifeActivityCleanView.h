//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UITableView;

@interface LifeActivityCleanView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _selectedChange;
    NSMutableArray *_selectCleanIds;
    UILabel *_topTitleLabel;
    UIButton *_selectedButton;
    UILabel *_selectedTitleLabel;
    UITableView *_tableView;
    NSMutableArray *_cleanIds;
}

@property(retain, nonatomic) NSMutableArray *cleanIds; // @synthesize cleanIds=_cleanIds;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *selectedTitleLabel; // @synthesize selectedTitleLabel=_selectedTitleLabel;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) NSMutableArray *selectCleanIds; // @synthesize selectCleanIds=_selectCleanIds;
@property(copy, nonatomic) CDUnknownBlockType selectedChange; // @synthesize selectedChange=_selectedChange;
- (void).cxx_destruct;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)selectionButtonAction:(id)arg1;
- (void)cleanItemSelect:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)updateSelectedTitle:(long long)arg1;
- (void)updateSelectButtonTitle:(id)arg1;
- (void)updateBottmBySelectedCount:(unsigned long long)arg1;
- (void)createControls;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

