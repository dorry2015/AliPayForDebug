//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TTFullGuideItem : NSObject <NSCopying>
{
    NSString *_pageParams;
    unsigned long long _step;
}

@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(copy, nonatomic) NSString *pageParams; // @synthesize pageParams=_pageParams;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPageParams:(id)arg1 traceStep:(unsigned long long)arg2;

@end
