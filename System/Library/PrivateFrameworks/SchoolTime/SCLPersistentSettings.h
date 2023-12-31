//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCLScheduleSettings;

__attribute__((visibility("hidden")))
@interface SCLPersistentSettings : NSObject
{
    _Bool _manualSchoolModeEnabled;	// 8 = 0x8
    SCLScheduleSettings *_scheduleSettings;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001d64e
- (void).cxx_destruct;	// IMP=0x000000000001da4f
@property(nonatomic, getter=isManualSchoolModeEnabled) _Bool manualSchoolModeEnabled; // @synthesize manualSchoolModeEnabled=_manualSchoolModeEnabled;
@property(retain, nonatomic) SCLScheduleSettings *scheduleSettings; // @synthesize scheduleSettings=_scheduleSettings;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d8aa
- (unsigned long long)hash;	// IMP=0x000000000001d867
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d7cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d75c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d6ac
- (id)init;	// IMP=0x000000000001d656

@end

