//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class NSString;

@interface NSCoder (BSXPCCoderExtras)
- (unsigned long long)decodeUInt64ForKey:(id)arg1;	// IMP=0x00200000000802dd
- (struct CGRect)decodeCGRectForKey:(id)arg1;	// IMP=0x00200000000802be
- (struct CGSize)decodeCGSizeForKey:(id)arg1;	// IMP=0x00200000000802ac
- (struct CGPoint)decodeCGPointForKey:(id)arg1;	// IMP=0x002000000008029a
- (id)decodeStringForKey:(id)arg1;	// IMP=0x0020000000080267
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x0020000000080176
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0020000000080164
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x0020000000080152
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x0020000000080140
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x002000000008012e
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;	// IMP=0x002000000008009c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
