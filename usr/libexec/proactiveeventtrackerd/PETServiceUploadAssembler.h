//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID, PETConfig;

@interface PETServiceUploadAssembler : NSObject
{
    _Bool _isConfigEnabled;	// 8 = 0x8
    PETConfig *_petConfig;	// 16 = 0x10
    NSDictionary *_pet1Config;	// 24 = 0x18
    NSUUID *_deviceId;	// 32 = 0x20
}

+ (id)loadPET1Config;	// IMP=0x0040000000011f08
+ (id)loadPETConfig;	// IMP=0x0010000000011cf6
- (void).cxx_destruct;	// IMP=0x0020000000011541
@property(retain) NSUUID *deviceId; // @synthesize deviceId=_deviceId;
@property _Bool isConfigEnabled; // @synthesize isConfigEnabled=_isConfigEnabled;
@property(retain) NSDictionary *pet1Config; // @synthesize pet1Config=_pet1Config;
@property(retain) PETConfig *petConfig; // @synthesize petConfig=_petConfig;
- (_Bool)_checkMessageSampling:(id)arg1;	// IMP=0x0010000000011408
- (_Bool)_checkSampling:(id)arg1;	// IMP=0x001000000001121b
- (_Bool)_canLog:(id)arg1 messageGroup:(id)arg2;	// IMP=0x00100000000110c8
- (_Bool)_canLogPET1Key:(id)arg1;	// IMP=0x0010000000010adb
- (id)assembleUnaggregatedUploadWithTracker:(id)arg1 messageGroup:(id)arg2;	// IMP=0x001000000001056e
- (id)assembleAggregatedUploadWithTracker:(id)arg1;	// IMP=0x001000000000ffb2
- (id)initWithRootDir:(id)arg1;	// IMP=0x001000000000fc4f

@end

