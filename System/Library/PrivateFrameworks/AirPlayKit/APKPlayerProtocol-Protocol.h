//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AirPlayKit/NSObject-Protocol.h>

@class APKKeyValueObserver, NSArray;

@protocol APKPlayerProtocol <NSObject>
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property(readonly, nonatomic) long long playerTimeControlStatus;
@property(readonly) NSArray *outputDevices;
- (APKKeyValueObserver *)beginObserveringTimeControlStatusWithChangeHandler:(void (^)(void))arg1;
- (APKKeyValueObserver *)beginObserveringExternalPlaybackChangeWithChangeHandler:(void (^)(void))arg1;
@end

