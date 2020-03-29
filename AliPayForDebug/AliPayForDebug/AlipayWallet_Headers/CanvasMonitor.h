//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CanvasConfigInfo, CanvasRunningInfo, NSMutableArray;

@interface CanvasMonitor : NSObject
{
    int _fpsCount;
    float _firstFrameTime;
    CanvasConfigInfo *_configInfo;
    CanvasRunningInfo *_runningInfo;
    NSMutableArray *_fpsArray;
    double _fpsStartTime;
    double _lastDrawTime;
    double _drawActionStartTime;
    NSMutableArray *_cpuTmpArray;
    NSMutableArray *_cpuResArray;
    NSMutableArray *_drawCallTmpArray;
    NSMutableArray *_drawCallResArray;
}

@property(retain, nonatomic) NSMutableArray *drawCallResArray; // @synthesize drawCallResArray=_drawCallResArray;
@property(retain, nonatomic) NSMutableArray *drawCallTmpArray; // @synthesize drawCallTmpArray=_drawCallTmpArray;
@property(retain, nonatomic) NSMutableArray *cpuResArray; // @synthesize cpuResArray=_cpuResArray;
@property(retain, nonatomic) NSMutableArray *cpuTmpArray; // @synthesize cpuTmpArray=_cpuTmpArray;
@property(nonatomic) double drawActionStartTime; // @synthesize drawActionStartTime=_drawActionStartTime;
@property(nonatomic) float firstFrameTime; // @synthesize firstFrameTime=_firstFrameTime;
@property(nonatomic) int fpsCount; // @synthesize fpsCount=_fpsCount;
@property(nonatomic) double lastDrawTime; // @synthesize lastDrawTime=_lastDrawTime;
@property(nonatomic) double fpsStartTime; // @synthesize fpsStartTime=_fpsStartTime;
@property(retain, nonatomic) NSMutableArray *fpsArray; // @synthesize fpsArray=_fpsArray;
@property(nonatomic) __weak CanvasRunningInfo *runningInfo; // @synthesize runningInfo=_runningInfo;
@property(nonatomic) __weak CanvasConfigInfo *configInfo; // @synthesize configInfo=_configInfo;
- (void).cxx_destruct;
- (void)oneFrameComplete;
- (void)drawActionComplete;
- (double)calcDrawCallCount;
- (double)calcCPUTime;
- (void)drawActionStart;
- (id)calcFps;
- (void)canvasWillDestroy;
- (id)init;

@end
