//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, MRNowPlayingAudioFormatController, NSString, NSTimer;
@protocol MRUAudioFormatControllerDelegate;

__attribute__((visibility("hidden")))
@interface MRUAudioFormatController : NSObject
{
    _Bool _isFaceTimePreferencesVisible;	// 8 = 0x8
    _Bool _optimisticSpatialAudioActive;	// 9 = 0x9
    id <MRUAudioFormatControllerDelegate> _delegate;	// 16 = 0x10
    MRNowPlayingAudioFormatController *_audioFormatController;	// 24 = 0x18
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 32 = 0x20
    NSTimer *_optimisticTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000260bb
@property(nonatomic) _Bool optimisticSpatialAudioActive; // @synthesize optimisticSpatialAudioActive=_optimisticSpatialAudioActive;
@property(nonatomic) _Bool isFaceTimePreferencesVisible; // @synthesize isFaceTimePreferencesVisible=_isFaceTimePreferencesVisible;
@property(retain, nonatomic) NSTimer *optimisticTimer; // @synthesize optimisticTimer=_optimisticTimer;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController; // @synthesize audioFormatController=_audioFormatController;
@property(nonatomic) __weak id <MRUAudioFormatControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateFacetime;	// IMP=0x0000000000025c89
- (void)expanseManagerDidLeaveExpanseSession:(id)arg1;	// IMP=0x0000000000025bcb
- (void)expanseManagerDidJoinExpanseSession:(id)arg1;	// IMP=0x0000000000025b0d
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeAudioFormatContentInfo:(id)arg2;	// IMP=0x0000000000025ac0
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeBundleID:(id)arg2 displayName:(id)arg3;	// IMP=0x0000000000025a66
- (id)audioFormatDescriptionForPreferences:(id)arg1;	// IMP=0x0000000000025936
- (void)resetOptimisticSpatialAudioActive;	// IMP=0x00000000000258ff
- (void)stopOptimisticSpatialAudioActive;	// IMP=0x0000000000025897
- (void)startOptimisticSpatialAudioActive;	// IMP=0x000000000002582b
- (void)stopMonitoring;	// IMP=0x00000000000257b6
- (void)startMonitoring;	// IMP=0x00000000000255af
@property(readonly, nonatomic) _Bool isMultichannelAvailable;
@property(readonly, nonatomic) _Bool isSpatialAudioActive;
@property(readonly, nonatomic) _Bool isMultichannelPreferencesVisible;
@property(readonly, nonatomic) _Bool isSpatialAudioNotAvailable;
@property(readonly, nonatomic) _Bool isSpatialAudioEnabled;
@property(readonly, nonatomic) NSString *preferencesBundleID;
@property(readonly, nonatomic) NSString *displayBundleID;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000250b9
- (id)init;	// IMP=0x000000000002504f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
