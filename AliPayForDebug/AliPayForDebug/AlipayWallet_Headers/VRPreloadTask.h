//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface VRPreloadTask : NSObject
{
    NSIndexPath *_indexPath;
    CDUnknownBlockType _doTask;
}

@property(copy, nonatomic) CDUnknownBlockType doTask; // @synthesize doTask=_doTask;
- (void).cxx_destruct;
- (void)doTask:(id)arg1;
- (id)initWithIndexPath:(id)arg1;

@end

