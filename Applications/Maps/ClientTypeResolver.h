//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ClientTypeResolverCurrentLocationSource, ClientTypeResolverParkedCarSource, ClientTypeResolverPersonalizedItemSource, NSMutableDictionary;

@interface ClientTypeResolver : NSObject
{
    ClientTypeResolverCurrentLocationSource *_currentLocationSource;	// 8 = 0x8
    ClientTypeResolverParkedCarSource *_parkedCarSource;	// 16 = 0x10
    ClientTypeResolverPersonalizedItemSource *_personalizedItemSource;	// 24 = 0x18
    NSMutableDictionary *_sources;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000006cfccc
@property(retain, nonatomic) NSMutableDictionary *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) ClientTypeResolverPersonalizedItemSource *personalizedItemSource; // @synthesize personalizedItemSource=_personalizedItemSource;
@property(retain, nonatomic) ClientTypeResolverParkedCarSource *parkedCarSource; // @synthesize parkedCarSource=_parkedCarSource;
@property(retain, nonatomic) ClientTypeResolverCurrentLocationSource *currentLocationSource; // @synthesize currentLocationSource=_currentLocationSource;
- (id)sourceWithType:(int)arg1;	// IMP=0x00100000006cfbd9
- (void)addSource:(id)arg1;	// IMP=0x00100000006cfa1b
- (_Bool)hasObjectWithType:(int)arg1;	// IMP=0x00100000006cf9c8
- (id)initWithCurrentLocation:(_Bool)arg1 parkedCar:(_Bool)arg2 personalizedItems:(_Bool)arg3;	// IMP=0x00100000006cf7d2
- (id)init;	// IMP=0x00100000006cf7b0

@end

