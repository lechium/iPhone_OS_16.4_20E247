//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSString, NSURL, PUEditableMediaProvider;
@protocol PUEditableAsset, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUEditableMediaProviderVideoURLNode : PXRunNode
{
    int _requestID;	// 8 = 0x8
    NSURL *_videoURL;	// 16 = 0x10
    long long _version;	// 24 = 0x18
    id <PUEditableAsset> _asset;	// 32 = 0x20
    PUEditableMediaProvider *_mediaProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015df18
@property(readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void)_handleDidLoadVideoURL:(id)arg1 info:(id)arg2;	// IMP=0x000000000015ddb4
- (void)run;	// IMP=0x000000000015dc3a
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3;	// IMP=0x000000000015db83

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

