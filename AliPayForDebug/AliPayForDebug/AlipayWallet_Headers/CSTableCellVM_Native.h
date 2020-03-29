//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSTableCellVMProtocol-Protocol.h"

@class CSNode, CSTableViewDelegate, NSString;
@protocol CSCard, OS_dispatch_semaphore;

@interface CSTableCellVM_Native : NSObject <CSTableCellVMProtocol>
{
    NSObject<OS_dispatch_semaphore> *_nodeLock;
    id <CSCard> _card;
    CSTableViewDelegate *_delegate;
    long long cellRelativePosition;
    CSNode *_rootNode;
}

@property(retain, nonatomic) CSNode *rootNode; // @synthesize rootNode=_rootNode;
@property(nonatomic) long long cellRelativePosition; // @synthesize cellRelativePosition;
@property(nonatomic) __weak CSTableViewDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <CSCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (id)init;
- (void)makeNativeRootNodeIfNeeded;
- (void)render:(id)arg1;
- (id)canvas;
@property(readonly, nonatomic) NSString *cardType;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) NSString *reuseIdentifier;

@end
