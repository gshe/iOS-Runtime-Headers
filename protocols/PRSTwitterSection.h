/* Generated by RuntimeBrowser.
 */

@protocol PRSTwitterSection <PRSSection>

@required

- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@optional

- (NSString *)date;
- (NSString *)footnote;
- (NSArray *)formatted_text;
- (NSString *)formatted_text_delimiter;
- (PRSImage *)image;
- (void)setDate:(NSString *)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setFormatted_text:(NSArray *)arg1;
- (void)setFormatted_text_delimiter:(NSString *)arg1;
- (void)setImage:(PRSImage *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setThumbnail:(PRSImage *)arg1;
- (void)setTitle_glyph:(PRSImage *)arg1;
- (NSString *)subtitle;
- (PRSImage *)thumbnail;
- (PRSImage *)title_glyph;

@end
