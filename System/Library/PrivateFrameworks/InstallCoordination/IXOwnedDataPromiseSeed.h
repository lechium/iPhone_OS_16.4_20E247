//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface IXOwnedDataPromiseSeed
{
    NSURL *_stagingBaseDir;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002b2b9
- (void).cxx_destruct;	// IMP=0x000000000002b36e
@property(retain, nonatomic) NSURL *stagingBaseDir; // @synthesize stagingBaseDir=_stagingBaseDir;
- (Class)clientPromiseClass;	// IMP=0x000000000002b338
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b2c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b21e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b183

@end

