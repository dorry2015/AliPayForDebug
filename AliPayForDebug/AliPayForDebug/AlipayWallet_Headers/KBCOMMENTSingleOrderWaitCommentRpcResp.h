//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCOMMENTBaseResult.h"

@class NSArray, NSString;

@interface KBCOMMENTSingleOrderWaitCommentRpcResp : KBCOMMENTBaseResult
{
    _Bool _hasMore;
    NSArray *_blockList;
    NSString *_lastId;
}

+ (Class)blockListElementClass;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
@property(retain, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
- (void).cxx_destruct;

@end
