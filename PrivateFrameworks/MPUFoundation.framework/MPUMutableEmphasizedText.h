/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMutableEmphasizedText : MPUEmphasizedText

@property (nonatomic, copy) NSArray *emphasisRanges;
@property (nonatomic, readonly) NSMutableString *mutableString;

- (void)addEmphasisRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithString:(id)arg1 emphasisRanges:(id)arg2;
- (id)mutableString;
- (void)removeEmphasisRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setEmphasisRanges:(id)arg1;

@end