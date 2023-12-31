//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCTransferFailureReport : NSObject
{
    NSMutableDictionary *_privateDBErrorCountByPCSState;	// 8 = 0x8
    NSMutableDictionary *_shareDBErrorCountByPCSState;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSDate *_lastFailureDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004769b
@property(readonly, nonatomic) NSDictionary *shareDBErrorCountByPCSState; // @synthesize shareDBErrorCountByPCSState=_shareDBErrorCountByPCSState;
@property(readonly, nonatomic) NSDictionary *privateDBErrorCountByPCSState; // @synthesize privateDBErrorCountByPCSState=_privateDBErrorCountByPCSState;
@property(readonly, nonatomic) NSDate *lastFailureDate; // @synthesize lastFailureDate=_lastFailureDate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)isEqualToTransferFailureReport:(id)arg1;	// IMP=0x000000000004746b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047408
- (unsigned long long)hash;	// IMP=0x0000000000047367
- (id)description;	// IMP=0x0000000000047319
- (void)encounteredErrors:(unsigned long long)arg1 atDate:(id)arg2;	// IMP=0x0000000000047212
- (void)encounteredErrorWithPCSState:(unsigned int)arg1 privateDB:(_Bool)arg2 atDate:(id)arg3;	// IMP=0x00000000000470c3
- (void)setLastFailureDate:(id)arg1;	// IMP=0x0000000000047008
- (id)initWithError:(id)arg1;	// IMP=0x0000000000046f68

@end

