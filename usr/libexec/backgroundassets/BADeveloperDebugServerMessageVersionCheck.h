//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BADeveloperDebugServerMessageVersionCheck
{
    _Bool _versionAllowed;	// 8 = 0x8
    NSString *_failureReason;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000038594
- (void).cxx_destruct;	// IMP=0x00200000000385bd
@property(readonly, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, nonatomic) _Bool versionAllowed; // @synthesize versionAllowed=_versionAllowed;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000384b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000383d3
- (id)initWithVersionAllowed:(_Bool)arg1 failureExplanation:(id)arg2;	// IMP=0x001000000003834e

@end
