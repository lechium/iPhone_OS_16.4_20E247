//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDataTransport, NSNumber, NSString;

@interface GKDelayedSetPhotoNetworkWriter : NSObject
{
    NSString *_bagKey;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    NSNumber *_avatarType;	// 24 = 0x18
}

+ (id)writerWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x002000000010e481
- (void).cxx_destruct;	// IMP=0x00200000001106c6
@property(copy, nonatomic) NSNumber *avatarType; // @synthesize avatarType=_avatarType;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void)uploadProfileImageMetadata:(id)arg1 fromUploadURL:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010fdc7
- (void)uploadImageData:(id)arg1 toURL:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010ef17
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010e58f
- (id)initWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x001000000010e4f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

