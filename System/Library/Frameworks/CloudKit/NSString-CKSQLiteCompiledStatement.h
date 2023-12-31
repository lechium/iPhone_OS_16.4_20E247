//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CKSQLiteCompiledStatement)
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x0020000000064466
- (void *)cksqlcs_textBindingValue:(int *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x00200000000a66fb
- (id)CKStringByReplacingUUIDsWithString:(id)arg1;	// IMP=0x00200000000af8c5
- (id)CKBase64DecodedString;	// IMP=0x00200000000af85f
- (id)CKBase64EncodedURLSafeString;	// IMP=0x00200000000af80a
- (id)CKNilIfLengthZero;	// IMP=0x00200000000af7df
- (id)CKSanitizedPath;	// IMP=0x00200000000af774
- (id)CKSHA256;	// IMP=0x00200000000af680
- (id)CKUnmangledDocumentNameFromURLFragment;	// IMP=0x00200000000af5f1
- (id)CKMangledDocumentNameForURLFragment;	// IMP=0x00200000000af2e4
- (id)CKSafeStringForURLWithCharsToBeEscaped:(id)arg1;	// IMP=0x00200000000af25d
- (id)CKSafeStringForURLPathComponent;	// IMP=0x00200000000af244
- (id)CKSafeHashStringForPathComponent;	// IMP=0x00200000000af14e
- (id)CKSafeStringForPathComponent;	// IMP=0x00200000000af0b7
- (id)CKDPIdentifier_MergeableValue;	// IMP=0x00200000000b3f07
- (id)CKDPIdentifier_Zone;	// IMP=0x00200000000b3ef0
- (id)CKDPIdentifier_ShareId;	// IMP=0x00200000000b3ed9
- (id)CKDPIdentifier_Subscription;	// IMP=0x00200000000b3ec2
- (id)CKDPIdentifier_Device;	// IMP=0x00200000000b3eab
- (id)CKDPIdentifier_User;	// IMP=0x00200000000b3e94
- (id)CKDPIdentifier_Record;	// IMP=0x00200000000b3e7d
- (id)CKDPIdentifier_Raw;	// IMP=0x00200000000b3e69
- (id)_CKDPIdentifierWithType:(int)arg1;	// IMP=0x00200000000b3d42
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00200000001b8fc3
- (id)ckShortDescription;	// IMP=0x0020000000206d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

