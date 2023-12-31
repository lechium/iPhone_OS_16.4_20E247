//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MISSING_TYPE, NSDictionary, NSNumber;

@interface LoadRentalInformationOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    MISSING_TYPE *_rentalKeyIdentifier;	// 104 = 0x68
    NSDictionary *_rentalInformation;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000010782b
@property(readonly, copy, nonatomic) NSDictionary *rentalInformation; // @synthesize rentalInformation=_rentalInformation;
@property(copy, nonatomic) NSNumber *rentalKeyIdentifier; // @synthesize rentalKeyIdentifier=_rentalKeyIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)run;	// IMP=0x0010000000107789
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;	// IMP=0x00100000001076c2

@end

