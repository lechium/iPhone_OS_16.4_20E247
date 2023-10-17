//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTDynamicTypeRecord : UTTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000015aa96
+ (id)_propertyClasses;	// IMP=0x006000000015a91d
- (void).cxx_destruct;	// IMP=0x000000000015ac0b
- (id)identifier;	// IMP=0x000000000015abf5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015ab9f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015aaf8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015aa9e
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x000000000015a99e
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000015a451
- (id)_delegatePath;	// IMP=0x000000000015a449
- (id)_declaringBundleBookmark;	// IMP=0x000000000015a441
- (id)_localizedDescription;	// IMP=0x000000000015a439
- (_Bool)isChildOfTypeIdentifier:(id)arg1;	// IMP=0x000000000015a364
- (id)childTypeIdentifiers;	// IMP=0x000000000015a34b
- (id)parentTypeIdentifiers;	// IMP=0x000000000015a2da
- (void)_LSRecord_resolve_pedigree;	// IMP=0x000000000015a2bf
- (id)pedigree;	// IMP=0x000000000015a2ae
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000015a26d
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x000000000015a18f
- (id)referenceURL;	// IMP=0x000000000015a187
- (id)preferredTagOfClass:(id)arg1;	// IMP=0x000000000015a167
- (id)tagSpecification;	// IMP=0x000000000015a0f2
- (id)declaration;	// IMP=0x0000000000159ff1
- (id)declaringBundleRecord;	// IMP=0x0000000000159fe9
- (_Bool)isCoreType;	// IMP=0x0000000000159fe1
- (_Bool)isActive;	// IMP=0x0000000000159fd9
- (_Bool)isImported;	// IMP=0x0000000000159fd1
- (_Bool)isExported;	// IMP=0x0000000000159fc9
- (_Bool)isInPublicDomain;	// IMP=0x0000000000159fc1
- (_Bool)isWildcard;	// IMP=0x0000000000159fb9
- (_Bool)isDeclared;	// IMP=0x0000000000159fb1
- (_Bool)isDynamic;	// IMP=0x0000000000159fa9
- (id)version;	// IMP=0x0000000000159fa1
- (id)_initWithContext:(struct LSContext *)arg1 dynamicUTI:(id)arg2;	// IMP=0x0000000000159f07

@end
