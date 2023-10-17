//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMDeviceMotion
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _deviceMotionDispatcher;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    double _rotationRateIntervalSeconds;	// 48 = 0x30
    int _sampleCount;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0020000000c8dcc1
- (void).cxx_destruct;	// IMP=0x0010000000c8dc7e
- (int)getSampleCount;	// IMP=0x0010000000c8dc6e
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000c8dc04
- (void)onDeviceMotionData:(const struct Sample *)arg1;	// IMP=0x0010000000c8dae7
- (void)teardownListeners;	// IMP=0x0010000000c8d9f4
- (void)setupListener;	// IMP=0x0010000000c8d69d
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000000c8d620

@end
