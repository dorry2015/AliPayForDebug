//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UITableView;
@protocol BLLWMenuListDelegate;

@interface BLLWMenuListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    float _viewHeight;
    float _viewWidth;
    UIImageView *bgImageView;
    id <BLLWMenuListDelegate> _delegate;
    UITableView *_table;
    UIView *_transparentView;
    UIView *_parentView;
    NSArray *_list;
    struct CGPoint _position;
}

@property(nonatomic) float viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) float viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(nonatomic) __weak id <BLLWMenuListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideMenuListView;
- (void)showMenuListView;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)addTransparentView:(id)arg1;
- (id)initWithList:(id)arg1 parentView:(id)arg2 rect:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
