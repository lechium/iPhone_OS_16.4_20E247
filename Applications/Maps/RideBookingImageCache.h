//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RideBookingImageCache : NSObject
{
    NSMutableDictionary *_imageCache;	// 8 = 0x8
}

+ (id)sharedCache;	// IMP=0x0040000000164be9
- (void).cxx_destruct;	// IMP=0x002000000016510c
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
- (id)imageForKey:(id)arg1;	// IMP=0x0010000000164f2b
- (void)cacheINImageData:(id)arg1 withKey:(id)arg2;	// IMP=0x0010000000164c3e

@end

