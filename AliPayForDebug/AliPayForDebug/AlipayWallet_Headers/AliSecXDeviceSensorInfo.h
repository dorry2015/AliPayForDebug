//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, CMMotionManager, NSMutableArray, NSOperationQueue, NSString;

@interface AliSecXDeviceSensorInfo : NSObject <CLLocationManagerDelegate>
{
    _Bool _executedOnce;
    _Bool _inSyncMode;
    CLLocationManager *_locationManager;
    CMMotionManager *_motionManager;
    NSOperationQueue *_queue;
    NSMutableArray *_accelerometerRecords;
    NSMutableArray *_gyroRecords;
    NSMutableArray *_magneticRecords;
    CLLocation *_currentLocation;
    NSString *_currentLocationTime;
    CDUnknownBlockType _completion;
    NSMutableArray *_gravityRecords;
    NSMutableArray *_pressureRecords;
}

@property(nonatomic) _Bool inSyncMode; // @synthesize inSyncMode=_inSyncMode;
@property(retain, nonatomic) NSMutableArray *pressureRecords; // @synthesize pressureRecords=_pressureRecords;
@property(retain, nonatomic) NSMutableArray *gravityRecords; // @synthesize gravityRecords=_gravityRecords;
@property(nonatomic) _Bool executedOnce; // @synthesize executedOnce=_executedOnce;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *currentLocationTime; // @synthesize currentLocationTime=_currentLocationTime;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSMutableArray *magneticRecords; // @synthesize magneticRecords=_magneticRecords;
@property(retain, nonatomic) NSMutableArray *gyroRecords; // @synthesize gyroRecords=_gyroRecords;
@property(retain, nonatomic) NSMutableArray *accelerometerRecords; // @synthesize accelerometerRecords=_accelerometerRecords;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCurrentTime;
- (id)getSensorData;
- (void)finishSensors;
- (id)getLocationSingleInstance;
- (void)startSensors:(int)arg1;
- (void)startSensors;
- (void)checkAllRecords;
- (void)proceedWithLocationService;
- (void)cancelLocationService;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)stopTimer;
- (void)processSensorsWithParam:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (_Bool)isLocationServiceAvailable;
- (id)availableSensors;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

