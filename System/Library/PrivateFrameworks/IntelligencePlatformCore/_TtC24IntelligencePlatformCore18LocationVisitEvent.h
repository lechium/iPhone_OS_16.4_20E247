//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC24IntelligencePlatformCore18LocationVisitEvent : NSObject
{
    MISSING_TYPE *locationVisit;	// 65536 = 0x10000
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x001000000039386f
- (void).cxx_destruct;	// IMP=0x0000000000393a98
- (id)init;	// IMP=0x0000000000393a58
- (id)serialize;	// IMP=0x00000000003939b3
@property(nonatomic, readonly) unsigned int dataVersion;

@end

