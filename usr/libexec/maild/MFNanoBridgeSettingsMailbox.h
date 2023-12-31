//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MFNanoBridgeSettingsMailbox : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000097c8e
+ (unsigned long long)sourceTypeForMailboxFilterType:(unsigned long long)arg1;	// IMP=0x0010000000097c04
+ (id)defaultSelectedMailboxes;	// IMP=0x0010000000097828
- (_Bool)isEqual:(id)arg1;	// IMP=0x0040000000097caf
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000097c9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000097c96
- (_Bool)isValid;	// IMP=0x0010000000097c86
- (void)configureCell:(id)arg1;	// IMP=0x0010000000097c80
- (unsigned long long)level;	// IMP=0x0010000000097c78
- (id)icon;	// IMP=0x0010000000097c70
- (id)displayName;	// IMP=0x0010000000097c68
- (unsigned long long)mailboxFilterType;	// IMP=0x0010000000097c60

@end

