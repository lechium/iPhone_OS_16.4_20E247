//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface IXOwnedDataPromiseSeed
{
    NSURL *_stagingBaseDir;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000343f7
- (void).cxx_destruct;	// IMP=0x002000000003449b
@property(retain, nonatomic) NSURL *stagingBaseDir; // @synthesize stagingBaseDir=_stagingBaseDir;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000343ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003435c
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000342c1

@end
