//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLTextRepAccessibility, NSString;

@protocol CRLTextEditorAccessibilityExtras <NSObject>
- (void)crlaxHandleSelectionChangedWithFlags:(unsigned long long)arg1;
- (void)crlaxHandleEditingRepContentsChanged;

@optional
- (NSString *)crlaxHintForTextRep:(CRLTextRepAccessibility *)arg1;
- (void)crlaxDidInsertNewListItem;
- (void)crlaxHandleStorageRangeChanged;
@end

