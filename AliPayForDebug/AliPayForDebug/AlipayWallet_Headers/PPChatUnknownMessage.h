//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatMessage.h"

#import "NSCoding-Protocol.h"

@class NSArray;

@interface PPChatUnknownMessage : PPChatMessage <NSCoding>
{
    NSArray *_articles;
}

@property(retain, nonatomic) NSArray *articles; // @synthesize articles=_articles;
- (void).cxx_destruct;
- (id)subItemForIndex:(int)arg1;
- (id)titleForHome;
- (id)init;

@end

