//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PHAsset, UGCPhotoWithMetadata;

@interface _UGCARPPhotoCarouselViewModel : NSObject
{
    _Bool _checked;	// 8 = 0x8
    UGCPhotoWithMetadata *_photoWithMetadata;	// 16 = 0x10
    PHAsset *_asset;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSURL *_imageURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000072f584
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UGCPhotoWithMetadata *photoWithMetadata; // @synthesize photoWithMetadata=_photoWithMetadata;
@property(readonly, nonatomic) double timeoutInterval;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *downloadIdentifier;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

