//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface _UGCPhotoCarouselViewModel : NSObject
{
    UIImage *_image;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSURL *_imageURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000967418
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
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
