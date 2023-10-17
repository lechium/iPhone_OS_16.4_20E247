//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMAccelerometer
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _accelerometerDispatcher;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    double _accelIntervalSeconds;	// 48 = 0x30
    unsigned int _fWorkoutRecorderAccelSampleCount;	// 56 = 0x38
    unsigned int _kWorkoutRecorderWaitNumAccelSamples;	// 60 = 0x3c
    NSMutableDictionary *_metadata;	// 64 = 0x40
    int _sampleCount;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x0020000000ce144a
- (void).cxx_destruct;	// IMP=0x0010000000ce1407
- (int)getSampleCount;	// IMP=0x0010000000ce13f7
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000ce13e3
- (void)onAccelerometerData:(const struct Sample *)arg1;	// IMP=0x0010000000ce119e
- (id)metadata;	// IMP=0x0010000000ce1179
- (void)dealloc;	// IMP=0x0010000000ce112b
- (void)teardownListeners;	// IMP=0x0010000000ce10d6
- (void)setupListener;	// IMP=0x0010000000ce0db1
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000000ce0cfa

@end
