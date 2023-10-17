//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, MRUArtwork, MRUEndpointController, MRUNowPlayingInfo, MRUTimeControls, MRUTransportControls, NSString;
@protocol MRUMetadataDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface MRUMPCMetadataDataSource : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    MRUArtwork *_artwork;	// 16 = 0x10
    MRUTimeControls *_timeControls;	// 24 = 0x18
    MRUNowPlayingInfo *_nowPlayingInfo;	// 32 = 0x20
    MRUTransportControls *_transportControls;	// 40 = 0x28
    id <MRUMetadataDataSourceDelegate> _delegate;	// 48 = 0x30
    MRUEndpointController *_endpointController;	// 56 = 0x38
    MPCPlayerResponse *_response;	// 64 = 0x40
    unsigned long long _stateHandle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000d2dd4
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) MRUEndpointController *endpointController; // @synthesize endpointController=_endpointController;
@property(nonatomic) __weak id <MRUMetadataDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRUTransportControls *transportControls; // @synthesize transportControls=_transportControls;
@property(readonly, nonatomic) MRUNowPlayingInfo *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(readonly, nonatomic) MRUTimeControls *timeControls; // @synthesize timeControls=_timeControls;
@property(readonly, nonatomic) MRUArtwork *artwork; // @synthesize artwork=_artwork;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)_stateDumpObject;	// IMP=0x00000000000d2c6a
- (id)placeholderSymbolName;	// IMP=0x00000000000d2b9e
- (id)placeholder;	// IMP=0x00000000000d2b52
- (void)updateTransportControlsWithResponse:(id)arg1;	// IMP=0x00000000000d2a31
- (void)updateTimeControlsWithResponse:(id)arg1;	// IMP=0x00000000000d28a1
- (void)updateNowPlayingInfoWithResponse:(id)arg1;	// IMP=0x00000000000d272b
- (void)updateArtworkWithResponse:(id)arg1;	// IMP=0x00000000000d2560
- (void)updateArtwork;	// IMP=0x00000000000d254a
- (void)updateBundleIDWithResponse:(id)arg1;	// IMP=0x00000000000d2404
- (void)updateData;	// IMP=0x00000000000d237e
- (void)endpointController:(id)arg1 didChangeRoute:(id)arg2;	// IMP=0x00000000000d236c
- (void)endpointController:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x00000000000d235a
- (void)endpointController:(id)arg1 didChangeResponse:(id)arg2;	// IMP=0x00000000000d2345
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000d2279
- (id)initWithResponse:(id)arg1;	// IMP=0x00000000000d220f
- (id)initWithEndpointController:(id)arg1;	// IMP=0x00000000000d2191
- (id)init;	// IMP=0x00000000000d1fbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
