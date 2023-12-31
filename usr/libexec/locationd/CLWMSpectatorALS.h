//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMSpectatorALS
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _spectatorALSDispatcher;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    int _sampleCount;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0020000000ce1df4
- (void).cxx_destruct;	// IMP=0x0010000000ce1db1
- (int)getSampleCount;	// IMP=0x0010000000ce1da1
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000ce1d8d
- (void)onSpectatorALSData:(const void *)arg1;	// IMP=0x0010000000ce1c88
- (void)teardownListeners;	// IMP=0x0010000000ce1c3f
- (void)setupListener;	// IMP=0x0010000000ce1b80
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000000ce1b1c

@end

