//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, STLocationStatusDomainLocationAttribution;

@interface CLAttributionRecord : NSObject
{
    int _serviceTypeAttributionCounts[18];	// 8 = 0x8
    int _totalAttributionCount;	// 80 = 0x50
    STLocationStatusDomainLocationAttribution *_attributionIdentifier;	// 88 = 0x58
    CLTimer *_attributionTimer;	// 96 = 0x60
}

@property(retain, nonatomic) CLTimer *attributionTimer; // @synthesize attributionTimer=_attributionTimer;
@property(retain, nonatomic) STLocationStatusDomainLocationAttribution *attributionIdentifier; // @synthesize attributionIdentifier=_attributionIdentifier;
@property(readonly, nonatomic) int totalAttributionCount; // @synthesize totalAttributionCount=_totalAttributionCount;
- (id)description;	// IMP=0x0010000000751f37
- (void)decrementAttributionCountForServiceType:(unsigned long long)arg1;	// IMP=0x0010000000751db7
- (void)incrementAttributionCountForServiceType:(unsigned long long)arg1;	// IMP=0x0010000000751daa
- (void)dealloc;	// IMP=0x0010000000751d39
- (id)initWithAttributionId:(id)arg1 andTimer:(id)arg2;	// IMP=0x0010000000751cc4

@end
