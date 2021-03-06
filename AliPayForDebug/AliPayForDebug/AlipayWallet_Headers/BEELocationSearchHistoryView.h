//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BEELocationSearchHistoryItems, NSMutableArray, NSString, UIButton;

@interface BEELocationSearchHistoryView : UIView
{
    CDUnknownBlockType _deleteRecordBlock;
    CDUnknownBlockType _clickRecordBlock;
    NSMutableArray *_historyArray;
    NSString *_appId;
    BEELocationSearchHistoryItems *_historyItems;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) BEELocationSearchHistoryItems *historyItems; // @synthesize historyItems=_historyItems;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSMutableArray *historyArray; // @synthesize historyArray=_historyArray;
@property(copy, nonatomic) CDUnknownBlockType clickRecordBlock; // @synthesize clickRecordBlock=_clickRecordBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteRecordBlock; // @synthesize deleteRecordBlock=_deleteRecordBlock;
- (void).cxx_destruct;
- (void)initView;
- (void)updateWithDataSource:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)addHistory:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sourceAppId:(id)arg2;

@end

