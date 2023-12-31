//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerXPCPublisher : NSObject
{
    id <SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating> _subscriber;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b698
- (void)setAudioConfiguration:(id)arg1;	// IMP=0x000000000000b59c
- (void)removeAllRequests;	// IMP=0x000000000000b4b9
- (void)removeRequest:(id)arg1;	// IMP=0x000000000000b3b2
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b054
- (id)init;	// IMP=0x000000000000af89

@end

