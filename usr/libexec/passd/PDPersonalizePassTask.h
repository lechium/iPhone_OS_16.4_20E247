//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PDPassUpdateContext, PKContact;

@interface PDPersonalizePassTask
{
    PDPassUpdateContext *_context;	// 16 = 0x10
    PKContact *_contact;	// 24 = 0x18
    NSString *_personalizationToken;	// 32 = 0x20
    unsigned long long _requiredPersonalizationFields;	// 40 = 0x28
    unsigned long long _personalizationSource;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002b5ab5
+ (id)taskWithWebService:(id)arg1 updateContext:(id)arg2 contact:(id)arg3 personalizationToken:(id)arg4 requiredPersonalizationFields:(unsigned long long)arg5 personalizationSource:(unsigned long long)arg6;	// IMP=0x00100000002b58f3
- (void).cxx_destruct;	// IMP=0x00200000002b71bb
@property(readonly, nonatomic) unsigned long long personalizationSource; // @synthesize personalizationSource=_personalizationSource;
@property(readonly, nonatomic) unsigned long long requiredPersonalizationFields; // @synthesize requiredPersonalizationFields=_requiredPersonalizationFields;
@property(readonly, nonatomic) NSString *personalizationToken; // @synthesize personalizationToken=_personalizationToken;
@property(readonly, nonatomic) PKContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) PDPassUpdateContext *context; // @synthesize context=_context;
- (id)_resultFromResponseData:(id)arg1;	// IMP=0x00100000002b6f55
- (_Bool)_matchesRegistrationTask:(id)arg1;	// IMP=0x00100000002b6da9
- (_Bool)_matchesGetPassTask:(id)arg1;	// IMP=0x00100000002b6bfd
- (_Bool)_matchesPersonalizePassTask:(id)arg1;	// IMP=0x00100000002b6a51
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x00100000002b697a
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x00100000002b689d
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x00100000002b6828
- (id)description;	// IMP=0x00100000002b66f7
- (void)handleError:(id)arg1;	// IMP=0x00100000002b66c9
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000002b652d
- (id)headerFields;	// IMP=0x00100000002b63eb
- (id);	// IMP=0x00100000002b6002
- (_Bool)backoffComplete;	// IMP=0x00100000002b5ffa
- (id)endpointComponents;	// IMP=0x00100000002b5f0d
- (id)method;	// IMP=0x00100000002b5f00
- (_Bool)pertainsToPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00100000002b5e29
@property(readonly, nonatomic) NSString *serialNumber;
- (_Bool)isValid;	// IMP=0x00100000002b5d19
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002b5c22
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002b5abd
- (id)initWithWebService:(id)arg1 updateContext:(id)arg2 contact:(id)arg3 personalizationToken:(id)arg4 requiredPersonalizationFields:(unsigned long long)arg5 personalizationSource:(unsigned long long)arg6;	// IMP=0x00100000002b59ad

@end
