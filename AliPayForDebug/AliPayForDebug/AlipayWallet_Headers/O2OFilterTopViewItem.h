//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface O2OFilterTopViewItem : NSObject
{
    _Bool _canBeSelected;
    _Bool _highlighted;
    NSString *_name;
    NSString *_spmSeed;
    unsigned long long _type;
}

+ (id)itemWithName:(id)arg1 spmSeed:(id)arg2;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool canBeSelected; // @synthesize canBeSelected=_canBeSelected;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *spmSeed; // @synthesize spmSeed=_spmSeed;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 spmSeed:(id)arg2;

@end

