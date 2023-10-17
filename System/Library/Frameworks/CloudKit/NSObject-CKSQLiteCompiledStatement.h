//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (CKSQLiteCompiledStatement)
+ (id)CKSQLiteClassName;	// IMP=0x00500000000d1749
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x00100000000643aa
- (id)cksqlcs_bindArchivedObject:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000a6611
- (id)cksqlcs_archivedObjectBindingValue:(id *)arg1;	// IMP=0x00100000000a658a
- (id)cksqlcs_bindBlob:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000a64b6
- (const void *)cksqlcs_blobBindingValue:(unsigned long long *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x00100000000a642f
- (id)cksqlcs_bindText:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000a6359
- (void *)cksqlcs_textBindingValue:(int *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x00100000000a62cd
- (id)cksqlcs_bindDouble:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000a620b
- (double)cksqlcs_doubleBindingValue:(id *)arg1;	// IMP=0x00100000000a6183
- (id)cksqlcs_bindInt64:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000a60c3
- (long long)cksqlcs_int64BindingValue:(id *)arg1;	// IMP=0x00100000000a603c
- (id)CKSingleLineDescription;	// IMP=0x00100000000b1bfa
- (id)CKHashedDescription;	// IMP=0x00100000000b1b7e
- (id)_CKDescriptionWithExpansion:(_Bool)arg1;	// IMP=0x00100000000b1a42
- (id)CKExpandedDescription;	// IMP=0x00100000000b1a2b
- (id)CKDescription;	// IMP=0x00100000000b1a17
- (id)CKPropertiesDescriptionStringFromProperties:(id)arg1;	// IMP=0x00100000000b1873
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00100000000b1866
- (id)CKPropertiesDescription;	// IMP=0x00100000000b1859
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00100000000b3121
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000001b8a20
- (id)CKObjectDescriptionRedact:(_Bool)arg1 avoidShortDescription:(_Bool)arg2;	// IMP=0x001000000021733a
- (id)CKObjectDescriptionRedact:(_Bool)arg1;	// IMP=0x0010000000217326
- (id)CKDescriptionRedact:(_Bool)arg1 avoidShortDescription:(_Bool)arg2;	// IMP=0x001000000021725a
- (id)CKRedactedDescription;	// IMP=0x0010000000217241
- (id)CKUnredactedDescription;	// IMP=0x001000000021722b
@end
