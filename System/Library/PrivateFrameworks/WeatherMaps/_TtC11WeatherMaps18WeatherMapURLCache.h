//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLCache.h>

@class NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps18WeatherMapURLCache : NSURLCache
{
}

- (id)init;	// IMP=0x0000000000141ae0
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 directoryURL:(id)arg3;	// IMP=0x00000000001419a0
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 diskPath:(id)arg3;	// IMP=0x0000000000141900
- (void)getCachedResponseForDataTask:(NSURLSessionDataTask *)arg1 completionHandler:(void (^)(NSCachedURLResponse *))arg2;	// IMP=0x0000000000141640
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;	// IMP=0x0000000000141130
- (id)cachedResponseForRequest:(id)arg1;	// IMP=0x0000000000140dc0
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000140c30

@end
