


<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
        <title>acer/liquid/libcamera2-phh/QualcommCameraHardware.h at ics from thepasto/liquidCM_devicetree - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    
    

    <meta content="authenticity_token" name="csrf-param" />
<meta content="1qzUB7BSBAtNC5l0zvs8fiypxvY7+fPXMhKU3Vxi2EU=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundles/github-37638de9697c8782cfc0e9bab54110e31406f528.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/jquery-6c2aad85e5c2becfaac6d62ce0f290d10fa1725e.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/github-724a1478428e953614c0459ba27f5d900fc109be.js" type="text/javascript"></script>
    

      <link rel='permalink' href='/thepasto/liquidCM_devicetree/blob/1800e3d784c27ad21390f87a8d09e97dec2ae9ab/acer/liquid/libcamera2-phh/QualcommCameraHardware.h'>
    <META NAME="ROBOTS" CONTENT="NOINDEX, FOLLOW">

    <meta name="description" content="liquidCM_devicetree - Devicetree for liquid to compile CM" />
  <link href="https://github.com/thepasto/liquidCM_devicetree/commits/ics.atom" rel="alternate" title="Recent Commits to liquidCM_devicetree:ics" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob  vis-public fork env-production ">
    


    

      <div id="header" class="true clearfix">
        <div class="container" class="clearfix">
          <a class="site-logo" href="https://github.com">
            <!--[if IE]>
            <img alt="GitHub" class="github-logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7.png?1323882770" />
            <img alt="GitHub" class="github-logo-hover" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7-hover.png?1324325405" />
            <![endif]-->
            <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1323882770" />
            <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1324325405" />
          </a>

                  <!--
      make sure to use fully qualified URLs here since this nav
      is used on error pages on other domains
    -->
    <ul class="top-nav logged_out">
        <li class="pricing"><a href="https://github.com/plans">Signup and Pricing</a></li>
        <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
      <li class="features"><a href="https://github.com/features">Features</a></li>
        <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      <li class="login"><a href="https://github.com/login?return_to=%2Fthepasto%2FliquidCM_devicetree%2Fblob%2Fics%2Facer%2Fliquid%2Flibcamera2-phh%2FQualcommCameraHardware.h">Login</a></li>
    </ul>



          
        </div>
      </div>

      

            <div class="site">
      <div class="container">
        <div class="pagehead repohead instapaper_ignore readability-menu">


        <div class="title-actions-bar">
          <h1>
            <a href="/thepasto">thepasto</a> /
            <strong><a href="/thepasto/liquidCM_devicetree" class="js-current-repository">liquidCM_devicetree</a></strong>
              <span class="fork-flag">
                <span class="text">forked from <a href="/cleaton/liquidCM_devicetree">cleaton/liquidCM_devicetree</a></span>
              </span>
          </h1>
          



              <ul class="pagehead-actions">


          <li><a href="/login?return_to=%2Fthepasto%2FliquidCM_devicetree" class="minibutton btn-watch watch-button entice tooltipped leftwards" rel="nofollow" title="You must be logged in to use this feature"><span><span class="icon"></span>Watch</span></a></li>
          <li><a href="/login?return_to=%2Fthepasto%2FliquidCM_devicetree" class="minibutton btn-fork fork-button entice tooltipped leftwards" rel="nofollow" title="You must be logged in to use this feature"><span><span class="icon"></span>Fork</span></a></li>


      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers ">
            <a href="/thepasto/liquidCM_devicetree/watchers" title="Watchers" class="tooltipped downwards">
              5
            </a>
          </li>
          <li class="forks">
            <a href="/thepasto/liquidCM_devicetree/network" title="Forks" class="tooltipped downwards">
              4
            </a>
          </li>
        </ul>
      </li>
    </ul>

        </div>

          

  <ul class="tabs">
    <li><a href="/thepasto/liquidCM_devicetree/tree/ics" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/thepasto/liquidCM_devicetree/network" highlight="repo_networkrepo_fork_queue">Network</a>
    <li><a href="/thepasto/liquidCM_devicetree/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>



    <li><a href="/thepasto/liquidCM_devicetree/graphs" highlight="repo_graphsrepo_contributors">Stats &amp; Graphs</a></li>

  </ul>

  
<div class="frame frame-center tree-finder" style="display:none"
      data-tree-list-url="/thepasto/liquidCM_devicetree/tree-list/1800e3d784c27ad21390f87a8d09e97dec2ae9ab"
      data-blob-url-prefix="/thepasto/liquidCM_devicetree/blob/1800e3d784c27ad21390f87a8d09e97dec2ae9ab"
    >

  <div class="breadcrumb">
    <b><a href="/thepasto/liquidCM_devicetree">liquidCM_devicetree</a></b> /
    <input class="tree-finder-input js-navigation-enable" type="text" name="query" autocomplete="off" spellcheck="false">
  </div>

    <div class="octotip">
      <p>
        <a href="/thepasto/liquidCM_devicetree/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever" rel="nofollow">Dismiss</a>
        <strong>Octotip:</strong> You've activated the <em>file finder</em>
        by pressing <span class="kbd">t</span> Start typing to filter the
        file list. Use <span class="kbd badmono">↑</span> and
        <span class="kbd badmono">↓</span> to navigate,
        <span class="kbd">enter</span> to view files.
      </p>
    </div>

  <table class="tree-browser" cellpadding="0" cellspacing="0">
    <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
    <tr class="js-no-results no-results" style="display: none">
      <th colspan="2">No matching files</th>
    </tr>
    <tbody class="js-results-list js-navigation-container" data-navigation-enable-mouse>
    </tbody>
  </table>
</div>

<div id="jump-to-line" style="display:none">
  <h2>Jump to Line</h2>
  <form>
    <input class="textfield" type="text">
    <div class="full-button">
      <button type="submit" class="classy">
        <span>Go</span>
      </button>
    </div>
  </form>
</div>


<div class="subnav-bar">

  <ul class="actions">
    
      <li class="switcher">

        <div class="context-menu-container js-menu-container">
          <span class="text">Current branch:</span>
          <a href="#"
             class="minibutton bigger switcher context-menu-button js-menu-target js-commitish-button btn-branch repo-tree"
             data-master-branch="master"
             data-ref="ics">
            <span><span class="icon"></span>ics</span>
          </a>

          <div class="context-pane commitish-context js-menu-content">
            <a href="javascript:;" class="close js-menu-close"></a>
            <div class="title">Switch Branches/Tags</div>
            <div class="body pane-selector commitish-selector js-filterable-commitishes">
              <div class="filterbar">
                <div class="placeholder-field js-placeholder-field">
                  <label class="placeholder" for="context-commitish-filter-field" data-placeholder-mode="sticky">Filter branches/tags</label>
                  <input type="text" id="context-commitish-filter-field" class="commitish-filter" />
                </div>

                <ul class="tabs">
                  <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
                  <li><a href="#" data-filter="tags">Tags</a></li>
                </ul>
              </div>

                <div class="commitish-item branch-commitish selector-item">
                  <h4>
                      <a href="/thepasto/liquidCM_devicetree/blob/ics/acer/liquid/libcamera2-phh/QualcommCameraHardware.h" data-name="ics">ics</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item">
                  <h4>
                      <a href="/thepasto/liquidCM_devicetree/blob/master/acer/liquid/libcamera2-phh/QualcommCameraHardware.h" data-name="master">master</a>
                  </h4>
                </div>


              <div class="no-results" style="display:none">Nothing to show</div>
            </div>
          </div><!-- /.commitish-context-context -->
        </div>

      </li>
  </ul>

  <ul class="subnav">
    <li><a href="/thepasto/liquidCM_devicetree/tree/ics" class="selected" highlight="repo_source">Files</a></li>
    <li><a href="/thepasto/liquidCM_devicetree/commits/ics" highlight="repo_commits">Commits</a></li>
    <li><a href="/thepasto/liquidCM_devicetree/branches" class="" highlight="repo_branches" rel="nofollow">Branches <span class="counter">2</span></a></li>
    <li><a href="/thepasto/liquidCM_devicetree/tags" class="blank" highlight="repo_tags">Tags <span class="counter">0</span></a></li>
    <li><a href="/thepasto/liquidCM_devicetree/downloads" class="blank" highlight="repo_downloads">Downloads <span class="counter">0</span></a></li>
  </ul>

</div>

  
  
  


          

        </div><!-- /.repohead -->

        




  
  <p class="last-commit">Latest commit to the <strong>ics</strong> branch</p>

<div class="commit commit-tease js-details-container">
  <p class="commit-title ">
      <a href="/thepasto/liquidCM_devicetree/commit/1800e3d784c27ad21390f87a8d09e97dec2ae9ab" class="message">first ICS commit</a>
      
  </p>
  <div class="commit-meta">
    <a href="/thepasto/liquidCM_devicetree/commit/1800e3d784c27ad21390f87a8d09e97dec2ae9ab" class="sha-block">commit <span class="sha">1800e3d784</span></a>

    <div class="authorship">
      <img class="gravatar" height="20" src="https://secure.gravatar.com/avatar/da28f8a2db5722c771c7ec362c9e7185?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="20" />
      <span class="author-name"><a href="/thepasto">thepasto</a></span>
      authored <time class="js-relative-date" datetime="2011-11-22T04:34:10-08:00" title="2011-11-22 04:34:10">November 22, 2011</time>

    </div>
  </div>
</div>


<!-- block_view_fragment_key: views4/v8/blob:v14:1895653:thepasto/liquidCM_devicetree:7fe1d85cb68f218c66c64a911c1c5bbe8a7b8dba:e1cf76e342c8af6042a9b0b8477cda5c -->
  <div id="slider">

    <div class="breadcrumb" data-path="acer/liquid/libcamera2-phh/QualcommCameraHardware.h/">
      <b><a href="/thepasto/liquidCM_devicetree/tree/1800e3d784c27ad21390f87a8d09e97dec2ae9ab" class="js-rewrite-sha">liquidCM_devicetree</a></b> / <a href="/thepasto/liquidCM_devicetree/tree/1800e3d784c27ad21390f87a8d09e97dec2ae9ab/acer" class="js-rewrite-sha">acer</a> / <a href="/thepasto/liquidCM_devicetree/tree/1800e3d784c27ad21390f87a8d09e97dec2ae9ab/acer/liquid" class="js-rewrite-sha">liquid</a> / <a href="/thepasto/liquidCM_devicetree/tree/1800e3d784c27ad21390f87a8d09e97dec2ae9ab/acer/liquid/libcamera2-phh" class="js-rewrite-sha">libcamera2-phh</a> / QualcommCameraHardware.h       <span style="display:none" id="clippy_836" class="clippy-text">acer/liquid/libcamera2-phh/QualcommCameraHardware.h</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?1302750674?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_836&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?1302750674?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_836&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="acer/liquid/libcamera2-phh/QualcommCameraHardware.h/" data-permalink-url="/thepasto/liquidCM_devicetree/blob/1800e3d784c27ad21390f87a8d09e97dec2ae9ab/acer/liquid/libcamera2-phh/QualcommCameraHardware.h" data-title="acer/liquid/libcamera2-phh/QualcommCameraHardware.h at ics from thepasto/liquidCM_devicetree - GitHub" data-type="blob">
          <ul class="big-actions">
            <li><a class="file-edit-link minibutton js-rewrite-sha" href="/thepasto/liquidCM_devicetree/edit/1800e3d784c27ad21390f87a8d09e97dec2ae9ab/acer/liquid/libcamera2-phh/QualcommCameraHardware.h" data-method="post" rel="nofollow"><span>Edit this file</span></a></li>
          </ul>

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png?1302750674" width="16" /></span>
                <span class="mode" title="File Mode">100755</span>
                  <span>600 lines (518 sloc)</span>
                <span>17.272 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/thepasto/liquidCM_devicetree/raw/ics/acer/liquid/libcamera2-phh/QualcommCameraHardware.h" id="raw-url">raw</a></li>
                  <li><a href="/thepasto/liquidCM_devicetree/blame/ics/acer/liquid/libcamera2-phh/QualcommCameraHardware.h">blame</a></li>
                <li><a href="/thepasto/liquidCM_devicetree/commits/ics/acer/liquid/libcamera2-phh/QualcommCameraHardware.h" rel="nofollow">history</a></li>
              </ul>
            </div>
              <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm">** Copyright 2008, Google Inc.</span></div><div class='line' id='LC3'><span class="cm">** Copyright (c) 2009, Code Aurora Forum. All rights reserved.</span></div><div class='line' id='LC4'><span class="cm">**</span></div><div class='line' id='LC5'><span class="cm">** Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);</span></div><div class='line' id='LC6'><span class="cm">** you may not use this file except in compliance with the License.</span></div><div class='line' id='LC7'><span class="cm">** You may obtain a copy of the License at</span></div><div class='line' id='LC8'><span class="cm">**</span></div><div class='line' id='LC9'><span class="cm">**     http://www.apache.org/licenses/LICENSE-2.0</span></div><div class='line' id='LC10'><span class="cm">**</span></div><div class='line' id='LC11'><span class="cm">** Unless required by applicable law or agreed to in writing, software</span></div><div class='line' id='LC12'><span class="cm">** distributed under the License is distributed on an &quot;AS IS&quot; BASIS,</span></div><div class='line' id='LC13'><span class="cm">** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.</span></div><div class='line' id='LC14'><span class="cm">** See the License for the specific language governing permissions and</span></div><div class='line' id='LC15'><span class="cm">** limitations under the License.</span></div><div class='line' id='LC16'><span class="cm">*/</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="cp">#ifndef ANDROID_HARDWARE_QUALCOMM_CAMERA_HARDWARE_H</span></div><div class='line' id='LC19'><span class="cp">#define ANDROID_HARDWARE_QUALCOMM_CAMERA_HARDWARE_H</span></div><div class='line' id='LC20'><br/></div><div class='line' id='LC21'><span class="cp">#include &lt;camera/CameraHardwareInterface.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;binder/MemoryBase.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;binder/MemoryHeapBase.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;stdint.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;ui/Overlay.h&gt;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="p">{</span></div><div class='line' id='LC28'><span class="cp">#include &lt;linux/android_pmem.h&gt;</span></div><div class='line' id='LC29'><span class="cp">#include &lt;media/msm_camera.h&gt;</span></div><div class='line' id='LC30'><span class="p">}</span></div><div class='line' id='LC31'><span class="cp">// Extra propriatary stuff (mostly from CM)</span></div><div class='line' id='LC32'><span class="cp">#define MSM_CAMERA_CONTROL &quot;/dev/msm_camera/control0&quot;</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><span class="cp">#define TRUE 1</span></div><div class='line' id='LC35'><span class="cp">#define FALSE 0</span></div><div class='line' id='LC36'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC37'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">in1_w</span><span class="p">;</span></div><div class='line' id='LC38'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">in1_h</span><span class="p">;</span></div><div class='line' id='LC39'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">out1_w</span><span class="p">;</span></div><div class='line' id='LC40'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">out1_h</span><span class="p">;</span></div><div class='line' id='LC41'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">in2_w</span><span class="p">;</span></div><div class='line' id='LC42'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">in2_h</span><span class="p">;</span></div><div class='line' id='LC43'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">out2_w</span><span class="p">;</span></div><div class='line' id='LC44'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">out2_h</span><span class="p">;</span></div><div class='line' id='LC45'>	<span class="n">uint8_t</span> <span class="n">update_flag</span><span class="p">;</span> </div><div class='line' id='LC46'><span class="p">}</span> <span class="n">common_crop_t</span><span class="p">;</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'><span class="k">typedef</span> <span class="n">uint8_t</span> <span class="n">cam_ctrl_type</span><span class="p">;</span></div><div class='line' id='LC49'><br/></div><div class='line' id='LC50'><span class="cp">#define CEILING16(x) (x&amp;0xfffffff0)</span></div><div class='line' id='LC51'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC52'>	<span class="c1">//Size: 0x20 bytes = 32 bytes = 16 short</span></div><div class='line' id='LC53'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">video_width</span><span class="p">;</span><span class="c1">//0xe4</span></div><div class='line' id='LC54'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">video_height</span><span class="p">;</span><span class="c1">//0xe6</span></div><div class='line' id='LC55'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">picture_width</span><span class="p">;</span> <span class="c1">//0xe8</span></div><div class='line' id='LC56'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">picture_height</span><span class="p">;</span><span class="c1">//0xea</span></div><div class='line' id='LC57'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">display_width</span><span class="p">;</span> <span class="c1">//0xec</span></div><div class='line' id='LC58'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">display_height</span><span class="p">;</span> <span class="c1">//0xee</span></div><div class='line' id='LC59'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">orig_picture_dx</span><span class="p">;</span>  <span class="c1">//0xf0</span></div><div class='line' id='LC60'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">orig_picture_dy</span><span class="p">;</span> <span class="c1">//0xf2</span></div><div class='line' id='LC61'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">ui_thumbnail_height</span><span class="p">;</span> <span class="c1">//0xf6</span></div><div class='line' id='LC62'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">ui_thumbnail_width</span><span class="p">;</span> <span class="c1">//0xf4</span></div><div class='line' id='LC63'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">thumbnail_width</span><span class="p">;</span>  <span class="c1">//0xf8</span></div><div class='line' id='LC64'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">thumbnail_height</span><span class="p">;</span>  <span class="c1">//0xfa</span></div><div class='line' id='LC65'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">raw_picture_height</span><span class="p">;</span> <span class="c1">//0xfc</span></div><div class='line' id='LC66'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">raw_picture_width</span><span class="p">;</span>  <span class="c1">//0xfe</span></div><div class='line' id='LC67'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">filler7</span><span class="p">;</span>   <span class="c1">///0x100</span></div><div class='line' id='LC68'>	<span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">filler8</span><span class="p">;</span>   <span class="c1">//0x102</span></div><div class='line' id='LC69'><span class="p">}</span> <span class="n">cam_ctrl_dimension_t</span><span class="p">;</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC72'>	<span class="n">uint32_t</span> <span class="n">timestamp</span><span class="p">;</span>  <span class="cm">/* seconds since 1/6/1980          */</span></div><div class='line' id='LC73'>	<span class="kt">double</span>   <span class="n">latitude</span><span class="p">;</span>   <span class="cm">/* degrees, WGS ellipsoid */</span></div><div class='line' id='LC74'>	<span class="kt">double</span>   <span class="n">longitude</span><span class="p">;</span>  <span class="cm">/* degrees                */</span></div><div class='line' id='LC75'>	<span class="n">int16_t</span>  <span class="n">altitude</span><span class="p">;</span>   <span class="cm">/* meters                          */</span></div><div class='line' id='LC76'><span class="p">}</span> <span class="n">camera_position_type</span><span class="p">;</span></div><div class='line' id='LC77'><span class="k">typedef</span> <span class="n">uint8_t</span> <span class="n">jpeg_event_t</span><span class="p">;</span></div><div class='line' id='LC78'><br/></div><div class='line' id='LC79'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC80'>	<span class="n">CAMERA_WB_MIN_MINUS_1</span><span class="p">,</span></div><div class='line' id='LC81'>	<span class="n">CAMERA_WB_AUTO</span> <span class="o">=</span> <span class="mi">1</span><span class="p">,</span>  <span class="cm">/* This list must match aeecamera.h */</span></div><div class='line' id='LC82'>	<span class="n">CAMERA_WB_CUSTOM</span><span class="p">,</span></div><div class='line' id='LC83'>	<span class="n">CAMERA_WB_INCANDESCENT</span><span class="p">,</span></div><div class='line' id='LC84'>	<span class="n">CAMERA_WB_FLUORESCENT</span><span class="p">,</span></div><div class='line' id='LC85'>	<span class="n">CAMERA_WB_DAYLIGHT</span><span class="p">,</span></div><div class='line' id='LC86'>	<span class="n">CAMERA_WB_CLOUDY_DAYLIGHT</span><span class="p">,</span></div><div class='line' id='LC87'>	<span class="n">CAMERA_WB_TWILIGHT</span><span class="p">,</span></div><div class='line' id='LC88'>	<span class="n">CAMERA_WB_SHADE</span><span class="p">,</span></div><div class='line' id='LC89'>	<span class="n">CAMERA_WB_MAX_PLUS_1</span></div><div class='line' id='LC90'><span class="p">}</span> <span class="n">camera_wb_type</span><span class="p">;</span></div><div class='line' id='LC91'><br/></div><div class='line' id='LC92'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_ANTIBANDING_OFF</span><span class="p">,</span></div><div class='line' id='LC94'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_ANTIBANDING_60HZ</span><span class="p">,</span></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_ANTIBANDING_50HZ</span><span class="p">,</span></div><div class='line' id='LC96'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_ANTIBANDING_AUTO</span><span class="p">,</span></div><div class='line' id='LC97'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_MAX_ANTIBANDING</span><span class="p">,</span></div><div class='line' id='LC98'><span class="p">}</span> <span class="n">camera_antibanding_type</span><span class="p">;</span></div><div class='line' id='LC99'><br/></div><div class='line' id='LC100'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC101'>	<span class="n">AF_MODE_NORMAL</span><span class="p">,</span></div><div class='line' id='LC102'>	<span class="n">AF_MODE_MACRO</span><span class="p">,</span></div><div class='line' id='LC103'>	<span class="n">AF_MODE_AUTO</span><span class="p">,</span></div><div class='line' id='LC104'><span class="p">}</span> <span class="n">isp3a_af_mode_t</span><span class="p">;</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'><span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC107'>	<span class="n">CAMERA_AEC_FRAME_AVERAGE</span><span class="p">,</span></div><div class='line' id='LC108'>	<span class="n">CAMERA_AEC_CENTER_WEIGHTED</span><span class="p">,</span></div><div class='line' id='LC109'>	<span class="n">CAMERA_AEC_SPOT_METERING</span><span class="p">,</span></div><div class='line' id='LC110'><span class="p">};</span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'><span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC113'>	<span class="n">LED_MODE_OFF</span><span class="p">,</span></div><div class='line' id='LC114'>	<span class="n">LED_MODE_ON</span><span class="p">,</span></div><div class='line' id='LC115'>	<span class="n">LED_MODE_AUTO</span><span class="p">,</span></div><div class='line' id='LC116'><span class="p">};</span></div><div class='line' id='LC117'><br/></div><div class='line' id='LC118'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC119'>	<span class="n">CAMERA_ISO_AUTO</span><span class="p">,</span></div><div class='line' id='LC120'>	<span class="n">CAMERA_ISO_DEBLUR</span><span class="p">,</span></div><div class='line' id='LC121'>	<span class="n">CAMERA_ISO_100</span><span class="p">,</span></div><div class='line' id='LC122'>	<span class="n">CAMERA_ISO_200</span><span class="p">,</span></div><div class='line' id='LC123'>	<span class="n">CAMERA_ISO_400</span><span class="p">,</span></div><div class='line' id='LC124'>	<span class="n">CAMERA_ISO_800</span><span class="p">,</span></div><div class='line' id='LC125'>	<span class="n">CAMERA_ISO_1600</span><span class="p">,</span></div><div class='line' id='LC126'><span class="p">}</span> <span class="n">camera_iso_mode_type</span><span class="p">;</span></div><div class='line' id='LC127'><br/></div><div class='line' id='LC128'><span class="k">struct</span> <span class="n">fifo_queue</span> <span class="p">{</span></div><div class='line' id='LC129'>	<span class="kt">int</span> <span class="n">num_of_frames</span><span class="p">;</span></div><div class='line' id='LC130'>	<span class="kt">int</span> <span class="n">front</span><span class="p">;</span></div><div class='line' id='LC131'>	<span class="k">struct</span> <span class="n">fifo_node</span> <span class="o">*</span><span class="n">node</span><span class="p">;</span></div><div class='line' id='LC132'>	<span class="n">pthread_mutex_t</span> <span class="n">mut</span><span class="p">;</span></div><div class='line' id='LC133'>	<span class="n">pthread_cond_t</span> <span class="n">wait</span><span class="p">;</span></div><div class='line' id='LC134'><span class="p">};</span></div><div class='line' id='LC135'><br/></div><div class='line' id='LC136'><span class="k">struct</span> <span class="n">fifo_node</span> <span class="p">{</span></div><div class='line' id='LC137'>	<span class="k">struct</span> <span class="n">msm_frame</span> <span class="o">*</span><span class="n">f</span><span class="p">;</span></div><div class='line' id='LC138'>	<span class="k">struct</span> <span class="n">fifo_node</span> <span class="o">*</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC139'><span class="p">};</span></div><div class='line' id='LC140'><br/></div><div class='line' id='LC141'><span class="kt">void</span> <span class="n">enqueue</span><span class="p">(</span><span class="k">struct</span> <span class="n">fifo_queue</span> <span class="o">*</span><span class="n">queue</span><span class="p">,</span> <span class="k">struct</span> <span class="n">fifo_node</span> <span class="o">*</span><span class="n">node</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC142'>	<span class="k">struct</span> <span class="n">fifo_node</span> <span class="o">*</span><span class="n">cur_node</span><span class="o">=</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">node</span><span class="p">;</span></div><div class='line' id='LC143'>	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC144'>	<span class="n">LOGE</span><span class="p">(</span><span class="s">&quot;enqueue:%p(%d)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">node</span><span class="p">,</span> <span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="p">);</span></div><div class='line' id='LC145'>	<span class="n">node</span><span class="o">-&gt;</span><span class="n">next</span><span class="o">=</span><span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC146'>	<span class="k">if</span><span class="p">(</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC147'>		<span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC148'>		<span class="n">queue</span><span class="o">-&gt;</span><span class="n">front</span><span class="o">=!!</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="p">;</span></div><div class='line' id='LC149'>		<span class="n">queue</span><span class="o">-&gt;</span><span class="n">node</span><span class="o">=</span><span class="n">node</span><span class="p">;</span></div><div class='line' id='LC150'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC151'>	<span class="p">}</span></div><div class='line' id='LC152'>	<span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC153'>	<span class="n">queue</span><span class="o">-&gt;</span><span class="n">front</span><span class="o">=!!</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="p">;</span></div><div class='line' id='LC154'>	<span class="k">for</span><span class="p">(</span><span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="p">(</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="o">-</span><span class="mi">2</span><span class="p">);</span><span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC155'>		<span class="n">cur_node</span><span class="o">=</span><span class="n">cur_node</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC156'>		<span class="n">assert</span><span class="p">(</span><span class="o">!!</span><span class="n">cur_node</span><span class="p">);</span></div><div class='line' id='LC157'>	<span class="p">}</span></div><div class='line' id='LC158'>	<span class="n">cur_node</span><span class="o">-&gt;</span><span class="n">next</span><span class="o">=</span><span class="n">node</span><span class="p">;</span></div><div class='line' id='LC159'><span class="p">}</span></div><div class='line' id='LC160'><br/></div><div class='line' id='LC161'><span class="k">struct</span> <span class="n">fifo_node</span> <span class="o">*</span><span class="n">dequeue</span><span class="p">(</span><span class="k">struct</span> <span class="n">fifo_queue</span> <span class="o">*</span><span class="n">queue</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC162'>	<span class="k">if</span><span class="p">(</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC163'>		<span class="k">return</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC164'>	<span class="k">struct</span> <span class="n">fifo_node</span> <span class="o">*</span><span class="n">node</span><span class="o">=</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">node</span><span class="p">;</span></div><div class='line' id='LC165'>	<span class="n">LOGE</span><span class="p">(</span><span class="s">&quot;dequeue:%p(%d)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">node</span><span class="p">,</span> <span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="p">);</span></div><div class='line' id='LC166'>	<span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="o">--</span><span class="p">;</span></div><div class='line' id='LC167'>	<span class="n">queue</span><span class="o">-&gt;</span><span class="n">front</span><span class="o">=!!</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">num_of_frames</span><span class="p">;</span></div><div class='line' id='LC168'>	<span class="n">queue</span><span class="o">-&gt;</span><span class="n">node</span><span class="o">=</span><span class="n">queue</span><span class="o">-&gt;</span><span class="n">node</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC169'>	<span class="k">return</span> <span class="n">node</span><span class="p">;</span></div><div class='line' id='LC170'><span class="p">}</span></div><div class='line' id='LC171'><span class="cp">#define CAMERA_MIN_CONTRAST 0</span></div><div class='line' id='LC172'><span class="cp">#define CAMERA_MAX_CONTRAST 6</span></div><div class='line' id='LC173'><span class="cp">#define CAMERA_MIN_SHARPNESS 0</span></div><div class='line' id='LC174'><span class="cp">#define CAMERA_MAX_SHARPNESS 6</span></div><div class='line' id='LC175'><span class="cp">#define CAMERA_MIN_SATURATION 0</span></div><div class='line' id='LC176'><span class="cp">#define CAMERA_MAX_SATURATION 6</span></div><div class='line' id='LC177'><br/></div><div class='line' id='LC178'><span class="cp">#define CAMERA_DEF_SHARPNESS 3</span></div><div class='line' id='LC179'><span class="cp">#define CAMERA_DEF_CONTRAST 3</span></div><div class='line' id='LC180'><span class="cp">#define CAMERA_DEF_SATURATION 3</span></div><div class='line' id='LC181'><br/></div><div class='line' id='LC182'><span class="k">enum</span> <span class="n">camera_ops</span> <span class="p">{</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_ENCODE_ROTATION</span><span class="p">,</span></div><div class='line' id='LC184'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_DIMENSION</span><span class="p">,</span></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_ZOOM</span><span class="p">,</span></div><div class='line' id='LC186'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_SENSOR_POSITION</span><span class="p">,</span></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_FOCUS_RECT</span><span class="p">,</span></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_LUMA_ADAPTATION</span><span class="p">,</span></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_CONTRAST</span><span class="p">,</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_BRIGHTNESS</span><span class="p">,</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_EXPOSURE_COMPENSATION</span><span class="p">,</span></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_SHARPNESS</span><span class="p">,</span></div><div class='line' id='LC193'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_HUE</span><span class="p">,</span></div><div class='line' id='LC194'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_SATURATION</span><span class="p">,</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_EXPOSURE</span><span class="p">,</span></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_AUTO_FOCUS</span><span class="p">,</span></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_WB</span><span class="p">,</span></div><div class='line' id='LC198'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_EFFECT</span><span class="p">,</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_FPS</span><span class="p">,</span></div><div class='line' id='LC200'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_FLASH</span><span class="p">,</span></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_NIGHTSHOT_MODE</span><span class="p">,</span></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_REFLECT</span><span class="p">,</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_PREVIEW_MODE</span><span class="p">,</span></div><div class='line' id='LC204'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_ANTIBANDING</span><span class="p">,</span></div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_RED_EYE_REDUCTION</span><span class="p">,</span></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_FOCUS_STEP</span><span class="p">,</span></div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_EXPOSURE_METERING</span><span class="p">,</span></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_AUTO_EXPOSURE_MODE</span><span class="p">,</span></div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_ISO</span><span class="p">,</span></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_BESTSHOT_MODE</span><span class="p">,</span></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_PREVIEW_FPS</span><span class="o">=</span><span class="mi">29</span><span class="p">,</span></div><div class='line' id='LC212'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_AF_MODE</span><span class="p">,</span></div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_HISTOGRAM</span><span class="p">,</span></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_FLASH_STATE</span><span class="p">,</span></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_FRAME_TIMESTAMP</span><span class="p">,</span></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_STROBE_FLASH</span><span class="p">,</span></div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_FPS_LIST</span><span class="p">,</span></div><div class='line' id='LC218'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_HJR</span><span class="p">,</span></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_ROLLOFF</span><span class="p">,</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_STOP_PREVIEW</span><span class="p">,</span></div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_START_PREVIEW</span><span class="p">,</span></div><div class='line' id='LC222'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_START_SNAPSHOT</span><span class="p">,</span></div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_START_RAW_SNAPSHOT</span><span class="p">,</span></div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_STOP_SNAPSHOT</span><span class="p">,</span></div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_EXIT</span><span class="p">,</span></div><div class='line' id='LC226'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_GET_PARM_MAXZOOM</span><span class="o">=</span><span class="mi">47</span><span class="p">,</span></div><div class='line' id='LC227'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_GET_PARM_AF_SHARPNESS</span><span class="p">,</span></div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_PARM_LED_MODE</span><span class="p">,</span></div><div class='line' id='LC229'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_MOTION_ISO</span><span class="p">,</span></div><div class='line' id='LC230'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_AUTO_FOCUS_CANCEL</span><span class="p">,</span></div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_GET_PARM_FOCUS_STEP</span><span class="p">,</span></div><div class='line' id='LC232'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_ENABLE_AFD</span><span class="p">,</span></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_PREPARE_SNAPSHOT</span><span class="p">,</span></div><div class='line' id='LC234'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_SET_FPS_MODE</span><span class="p">,</span></div><div class='line' id='LC235'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_START_VIDEO</span><span class="p">,</span></div><div class='line' id='LC236'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_STOP_VIDEO</span><span class="p">,</span></div><div class='line' id='LC237'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_START_RECORDING</span><span class="p">,</span></div><div class='line' id='LC238'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CAMERA_STOP_RECORDING</span></div><div class='line' id='LC239'><span class="p">};</span></div><div class='line' id='LC240'><br/></div><div class='line' id='LC241'><br/></div><div class='line' id='LC242'><span class="cp">#define CAM_CTRL_SUCCESS 1</span></div><div class='line' id='LC243'><br/></div><div class='line' id='LC244'><span class="cp">#define PAD_TO_WORD(x) ((x&amp;1) ? x+1 : x)</span></div><div class='line' id='LC245'><span class="cp">#define JPEG_EVENT_DONE 0 </span><span class="cm">/* useless */</span><span class="cp"></span></div><div class='line' id='LC246'><br/></div><div class='line' id='LC247'><br/></div><div class='line' id='LC248'><br/></div><div class='line' id='LC249'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC250'>	<span class="n">CAMERA_RSP_CB_SUCCESS</span><span class="p">,</span>    <span class="cm">/* Function is accepted         */</span></div><div class='line' id='LC251'>	<span class="n">CAMERA_EXIT_CB_DONE</span><span class="p">,</span>      <span class="cm">/* Function is executed         */</span></div><div class='line' id='LC252'>	<span class="n">CAMERA_EXIT_CB_FAILED</span><span class="p">,</span>    <span class="cm">/* Execution failed or rejected */</span></div><div class='line' id='LC253'>	<span class="n">CAMERA_EXIT_CB_DSP_IDLE</span><span class="p">,</span>  <span class="cm">/* DSP is in idle state         */</span></div><div class='line' id='LC254'>	<span class="n">CAMERA_EXIT_CB_DSP_ABORT</span><span class="p">,</span> <span class="cm">/* Abort due to DSP failure     */</span></div><div class='line' id='LC255'>	<span class="n">CAMERA_EXIT_CB_ABORT</span><span class="p">,</span>     <span class="cm">/* Function aborted             */</span></div><div class='line' id='LC256'>	<span class="n">CAMERA_EXIT_CB_ERROR</span><span class="p">,</span>     <span class="cm">/* Failed due to resource       */</span></div><div class='line' id='LC257'>	<span class="n">CAMERA_EVT_CB_FRAME</span><span class="p">,</span>      <span class="cm">/* Preview or video frame ready */</span></div><div class='line' id='LC258'>	<span class="n">CAMERA_EVT_CB_PICTURE</span><span class="p">,</span>    <span class="cm">/* Picture frame ready for multi-shot */</span></div><div class='line' id='LC259'>	<span class="n">CAMERA_STATUS_CB</span><span class="p">,</span>         <span class="cm">/* Status updated               */</span></div><div class='line' id='LC260'>	<span class="n">CAMERA_EXIT_CB_FILE_SIZE_EXCEEDED</span><span class="p">,</span> <span class="cm">/* Specified file size not achieved,</span></div><div class='line' id='LC261'><span class="cm">	encoded file written &amp; returned anyway */</span></div><div class='line' id='LC262'>	<span class="n">CAMERA_EXIT_CB_BUFFER</span><span class="p">,</span>    <span class="cm">/* A buffer is returned         */</span></div><div class='line' id='LC263'>	<span class="n">CAMERA_EVT_CB_SNAPSHOT_DONE</span><span class="p">,</span><span class="cm">/*  Snapshot updated               */</span></div><div class='line' id='LC264'>	<span class="n">CAMERA_CB_MAX</span></div><div class='line' id='LC265'><span class="p">}</span> <span class="n">camera_cb_type</span><span class="p">;</span></div><div class='line' id='LC266'><br/></div><div class='line' id='LC267'><span class="k">struct</span> <span class="n">cam_frame_start_parms</span> <span class="p">{</span></div><div class='line' id='LC268'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">prout</span><span class="p">;</span></div><div class='line' id='LC269'>	<span class="k">struct</span> <span class="n">msm_frame</span> <span class="n">frame</span><span class="p">;</span></div><div class='line' id='LC270'>	<span class="k">struct</span> <span class="n">msm_frame</span> <span class="n">video_frame</span><span class="p">;</span></div><div class='line' id='LC271'><span class="p">};</span></div><div class='line' id='LC272'><br/></div><div class='line' id='LC273'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC274'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">a</span><span class="p">;</span></div><div class='line' id='LC275'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">b</span><span class="p">;</span></div><div class='line' id='LC276'><span class="p">}</span> <span class="n">rat_t</span><span class="p">;</span></div><div class='line' id='LC277'><br/></div><div class='line' id='LC278'><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">exif_tag_id_t</span><span class="p">;</span></div><div class='line' id='LC279'><span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC280'>	<span class="n">EXIFTAGID_GPS_LATITUDE</span>	<span class="o">=</span> <span class="mh">0x20002</span><span class="p">,</span></div><div class='line' id='LC281'>	<span class="n">EXIFTAGID_GPS_LONGITUDE</span>	<span class="o">=</span> <span class="mh">0x40004</span><span class="p">,</span></div><div class='line' id='LC282'><span class="p">};</span></div><div class='line' id='LC283'><span class="cp">#define EXIF_RATIONAL 5</span></div><div class='line' id='LC284'><span class="cp">#define EXIF_ASCII 2</span></div><div class='line' id='LC285'><span class="cp">#define EXIF_BYTE 1</span></div><div class='line' id='LC286'><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">exif_tag_type_t</span><span class="p">;</span></div><div class='line' id='LC287'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC288'>	<span class="c1">//24 bytes = 6 ints</span></div><div class='line' id='LC289'>	<span class="n">exif_tag_type_t</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC290'>	<span class="n">uint32_t</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC291'>	<span class="n">uint32_t</span> <span class="n">copy</span><span class="p">;</span></div><div class='line' id='LC292'>	<span class="n">uint32_t</span> <span class="n">junk1</span><span class="p">;</span></div><div class='line' id='LC293'>	<span class="n">uint32_t</span> <span class="n">junk2</span><span class="p">;</span></div><div class='line' id='LC294'>	<span class="n">uint32_t</span> <span class="n">junk3</span><span class="p">;</span></div><div class='line' id='LC295'><span class="p">}</span> <span class="n">exif_tag_entry_t</span><span class="p">;</span></div><div class='line' id='LC296'><br/></div><div class='line' id='LC297'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC298'>	<span class="n">exif_tag_id_t</span> <span class="n">tagid</span><span class="p">;</span></div><div class='line' id='LC299'>	<span class="n">exif_tag_entry_t</span> <span class="n">tag_entry</span><span class="p">;</span></div><div class='line' id='LC300'><span class="p">}</span> <span class="n">exif_tags_info_t</span><span class="p">;</span></div><div class='line' id='LC301'><br/></div><div class='line' id='LC302'><span class="c1">// End of closed stuff</span></div><div class='line' id='LC303'><br/></div><div class='line' id='LC304'><span class="k">struct</span> <span class="n">str_map</span> <span class="p">{</span></div><div class='line' id='LC305'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="k">const</span> <span class="n">desc</span><span class="p">;</span></div><div class='line' id='LC306'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC307'><span class="p">};</span></div><div class='line' id='LC308'><br/></div><div class='line' id='LC309'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC310'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">TARGET_MSM7625</span><span class="p">,</span></div><div class='line' id='LC311'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">TARGET_MSM7627</span><span class="p">,</span></div><div class='line' id='LC312'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">TARGET_QSD8250</span><span class="p">,</span></div><div class='line' id='LC313'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">TARGET_MSM7630</span><span class="p">,</span></div><div class='line' id='LC314'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">TARGET_MAX</span></div><div class='line' id='LC315'><span class="p">}</span><span class="n">targetType</span><span class="p">;</span></div><div class='line' id='LC316'><br/></div><div class='line' id='LC317'><span class="k">struct</span> <span class="n">target_map</span> <span class="p">{</span></div><div class='line' id='LC318'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">targetStr</span><span class="p">;</span></div><div class='line' id='LC319'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">targetType</span> <span class="n">targetEnum</span><span class="p">;</span></div><div class='line' id='LC320'><span class="p">};</span></div><div class='line' id='LC321'><br/></div><div class='line' id='LC322'><span class="k">struct</span> <span class="n">board_property</span><span class="p">{</span></div><div class='line' id='LC323'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">targetType</span> <span class="n">target</span><span class="p">;</span></div><div class='line' id='LC324'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">previewSizeMask</span><span class="p">;</span></div><div class='line' id='LC325'><span class="p">};</span></div><div class='line' id='LC326'><br/></div><div class='line' id='LC327'><span class="k">namespace</span> <span class="n">android</span> <span class="p">{</span></div><div class='line' id='LC328'><br/></div><div class='line' id='LC329'><span class="k">class</span> <span class="nc">QualcommCameraHardware</span> <span class="o">:</span> <span class="k">public</span> <span class="n">CameraHardwareInterface</span> <span class="p">{</span></div><div class='line' id='LC330'><span class="k">public</span><span class="o">:</span></div><div class='line' id='LC331'><br/></div><div class='line' id='LC332'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span> <span class="n">getPreviewHeap</span><span class="p">()</span> <span class="k">const</span><span class="p">;</span></div><div class='line' id='LC333'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span> <span class="n">getRawHeap</span><span class="p">()</span> <span class="k">const</span><span class="p">;</span></div><div class='line' id='LC334'><br/></div><div class='line' id='LC335'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">setCallbacks</span><span class="p">(</span><span class="n">notify_callback</span> <span class="n">notify_cb</span><span class="p">,</span></div><div class='line' id='LC336'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback</span> <span class="n">data_cb</span><span class="p">,</span></div><div class='line' id='LC337'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback_timestamp</span> <span class="n">data_cb_timestamp</span><span class="p">,</span></div><div class='line' id='LC338'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC339'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">enableMsgType</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">);</span></div><div class='line' id='LC340'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">disableMsgType</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">);</span></div><div class='line' id='LC341'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span> <span class="n">msgTypeEnabled</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">);</span></div><div class='line' id='LC342'><br/></div><div class='line' id='LC343'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">dump</span><span class="p">(</span><span class="kt">int</span> <span class="n">fd</span><span class="p">,</span> <span class="k">const</span> <span class="n">Vector</span><span class="o">&lt;</span><span class="n">String16</span><span class="o">&gt;&amp;</span> <span class="n">args</span><span class="p">)</span> <span class="k">const</span><span class="p">;</span></div><div class='line' id='LC344'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">startPreview</span><span class="p">();</span></div><div class='line' id='LC345'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">stopPreview</span><span class="p">();</span></div><div class='line' id='LC346'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span> <span class="n">previewEnabled</span><span class="p">();</span></div><div class='line' id='LC347'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">startRecording</span><span class="p">();</span></div><div class='line' id='LC348'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">stopRecording</span><span class="p">();</span></div><div class='line' id='LC349'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span> <span class="n">recordingEnabled</span><span class="p">();</span></div><div class='line' id='LC350'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">releaseRecordingFrame</span><span class="p">(</span><span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">mem</span><span class="p">);</span></div><div class='line' id='LC351'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">autoFocus</span><span class="p">();</span></div><div class='line' id='LC352'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">cancelAutoFocus</span><span class="p">();</span></div><div class='line' id='LC353'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">takePicture</span><span class="p">();</span></div><div class='line' id='LC354'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">cancelPicture</span><span class="p">();</span></div><div class='line' id='LC355'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">setParameters</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC356'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">CameraParameters</span> <span class="n">getParameters</span><span class="p">()</span> <span class="k">const</span><span class="p">;</span></div><div class='line' id='LC357'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">sendCommand</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">command</span><span class="p">,</span> <span class="n">int32_t</span> <span class="n">arg1</span><span class="p">,</span> <span class="n">int32_t</span> <span class="n">arg2</span><span class="p">);</span></div><div class='line' id='LC358'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">getBufferInfo</span><span class="p">(</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">Frame</span><span class="p">,</span> <span class="n">size_t</span> <span class="o">*</span><span class="n">alignedSize</span><span class="p">);</span></div><div class='line' id='LC359'><br/></div><div class='line' id='LC360'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">release</span><span class="p">();</span></div><div class='line' id='LC361'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span> <span class="n">useOverlay</span><span class="p">();</span></div><div class='line' id='LC362'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">setOverlay</span><span class="p">(</span><span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">Overlay</span><span class="o">&gt;</span> <span class="o">&amp;</span><span class="n">overlay</span><span class="p">);</span></div><div class='line' id='LC363'><br/></div><div class='line' id='LC364'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">CameraHardwareInterface</span><span class="o">&gt;</span> <span class="n">createInstance</span><span class="p">();</span></div><div class='line' id='LC365'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">QualcommCameraHardware</span><span class="o">&gt;</span> <span class="n">getInstance</span><span class="p">();</span></div><div class='line' id='LC366'><br/></div><div class='line' id='LC367'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">receivePreviewFrame</span><span class="p">(</span><span class="k">struct</span> <span class="n">msm_frame</span> <span class="o">*</span><span class="n">frame</span><span class="p">);</span></div><div class='line' id='LC368'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">receiveRecordingFrame</span><span class="p">(</span><span class="k">struct</span> <span class="n">msm_frame</span> <span class="o">*</span><span class="n">frame</span><span class="p">);</span></div><div class='line' id='LC369'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">receiveJpegPicture</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC370'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">jpeg_set_location</span><span class="p">();</span></div><div class='line' id='LC371'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">receiveJpegPictureFragment</span><span class="p">(</span><span class="n">uint8_t</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="n">uint32_t</span> <span class="n">size</span><span class="p">);</span></div><div class='line' id='LC372'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">notifyShutter</span><span class="p">(</span><span class="n">common_crop_t</span> <span class="o">*</span><span class="n">crop</span><span class="p">,</span> <span class="kt">bool</span> <span class="n">mPlayShutterSoundOnly</span><span class="p">);</span></div><div class='line' id='LC373'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">receive_camframetimeout</span><span class="p">();</span></div><div class='line' id='LC374'><br/></div><div class='line' id='LC375'><span class="k">private</span><span class="o">:</span></div><div class='line' id='LC376'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">QualcommCameraHardware</span><span class="p">();</span></div><div class='line' id='LC377'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="n">QualcommCameraHardware</span><span class="p">();</span></div><div class='line' id='LC378'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">startPreviewInternal</span><span class="p">();</span></div><div class='line' id='LC379'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">stopPreviewInternal</span><span class="p">();</span></div><div class='line' id='LC380'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">friend</span> <span class="kt">void</span> <span class="o">*</span><span class="n">auto_focus_thread</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">);</span></div><div class='line' id='LC381'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">runAutoFocus</span><span class="p">();</span></div><div class='line' id='LC382'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">cancelAutoFocusInternal</span><span class="p">();</span></div><div class='line' id='LC383'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">native_set_dimension</span> <span class="p">(</span><span class="kt">int</span> <span class="n">camfd</span><span class="p">);</span></div><div class='line' id='LC384'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">native_jpeg_encode</span> <span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC385'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">native_set_parm</span><span class="p">(</span><span class="n">cam_ctrl_type</span> <span class="n">type</span><span class="p">,</span> <span class="n">uint16_t</span> <span class="n">length</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">value</span><span class="p">);</span></div><div class='line' id='LC386'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">native_zoom_image</span><span class="p">(</span><span class="kt">int</span> <span class="n">fd</span><span class="p">,</span> <span class="kt">int</span> <span class="n">srcOffset</span><span class="p">,</span> <span class="kt">int</span> <span class="n">dstOffset</span><span class="p">,</span> <span class="n">common_crop_t</span> <span class="o">*</span><span class="n">crop</span><span class="p">);</span></div><div class='line' id='LC387'><br/></div><div class='line' id='LC388'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="n">wp</span><span class="o">&lt;</span><span class="n">QualcommCameraHardware</span><span class="o">&gt;</span> <span class="n">singleton</span><span class="p">;</span></div><div class='line' id='LC389'><br/></div><div class='line' id='LC390'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* These constants reflect the number of buffers that libmmcamera requires</span></div><div class='line' id='LC391'><span class="cm">       for preview and raw, and need to be updated when libmmcamera</span></div><div class='line' id='LC392'><span class="cm">       changes.</span></div><div class='line' id='LC393'><span class="cm">    */</span></div><div class='line' id='LC394'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="k">const</span> <span class="kt">int</span> <span class="n">kPreviewBufferCount</span> <span class="o">=</span> <span class="n">NUM_PREVIEW_BUFFERS</span><span class="p">;</span></div><div class='line' id='LC395'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="k">const</span> <span class="kt">int</span> <span class="n">kRawBufferCount</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC396'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="k">const</span> <span class="kt">int</span> <span class="n">kJpegBufferCount</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC397'><br/></div><div class='line' id='LC398'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">jpegPadding</span><span class="p">;</span></div><div class='line' id='LC399'><br/></div><div class='line' id='LC400'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CameraParameters</span> <span class="n">mParameters</span><span class="p">;</span></div><div class='line' id='LC401'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">frame_size</span><span class="p">;</span></div><div class='line' id='LC402'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mCameraRunning</span><span class="p">;</span></div><div class='line' id='LC403'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mCameraRunningLock</span><span class="p">;</span></div><div class='line' id='LC404'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mPreviewInitialized</span><span class="p">;</span></div><div class='line' id='LC405'><br/></div><div class='line' id='LC406'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// This class represents a heap which maintains several contiguous</span></div><div class='line' id='LC407'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// buffers.  The heap may be backed by pmem (when pmem_pool contains</span></div><div class='line' id='LC408'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// the name of a /dev/pmem* file), or by ashmem (when pmem_pool == NULL).</span></div><div class='line' id='LC409'><br/></div><div class='line' id='LC410'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">MemPool</span> <span class="o">:</span> <span class="k">public</span> <span class="n">RefBase</span> <span class="p">{</span></div><div class='line' id='LC411'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">MemPool</span><span class="p">(</span><span class="kt">int</span> <span class="n">buffer_size</span><span class="p">,</span> <span class="kt">int</span> <span class="n">num_buffers</span><span class="p">,</span></div><div class='line' id='LC412'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">frame_size</span><span class="p">,</span></div><div class='line' id='LC413'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC414'><br/></div><div class='line' id='LC415'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="n">MemPool</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC416'><br/></div><div class='line' id='LC417'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">completeInitialization</span><span class="p">();</span></div><div class='line' id='LC418'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">initialized</span><span class="p">()</span> <span class="k">const</span> <span class="p">{</span></div><div class='line' id='LC419'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">mHeap</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">&amp;&amp;</span> <span class="n">mHeap</span><span class="o">-&gt;</span><span class="n">base</span><span class="p">()</span> <span class="o">!=</span> <span class="n">MAP_FAILED</span><span class="p">;</span></div><div class='line' id='LC420'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC421'><br/></div><div class='line' id='LC422'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">dump</span><span class="p">(</span><span class="kt">int</span> <span class="n">fd</span><span class="p">,</span> <span class="k">const</span> <span class="n">Vector</span><span class="o">&lt;</span><span class="n">String16</span><span class="o">&gt;&amp;</span> <span class="n">args</span><span class="p">)</span> <span class="k">const</span><span class="p">;</span></div><div class='line' id='LC423'><br/></div><div class='line' id='LC424'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mBufferSize</span><span class="p">;</span></div><div class='line' id='LC425'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mAlignedBufferSize</span><span class="p">;</span></div><div class='line' id='LC426'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mNumBuffers</span><span class="p">;</span></div><div class='line' id='LC427'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mFrameSize</span><span class="p">;</span></div><div class='line' id='LC428'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">MemoryHeapBase</span><span class="o">&gt;</span> <span class="n">mHeap</span><span class="p">;</span></div><div class='line' id='LC429'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">MemoryBase</span><span class="o">&gt;</span> <span class="o">*</span><span class="n">mBuffers</span><span class="p">;</span></div><div class='line' id='LC430'><br/></div><div class='line' id='LC431'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">mName</span><span class="p">;</span></div><div class='line' id='LC432'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC433'><br/></div><div class='line' id='LC434'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">AshmemPool</span> <span class="o">:</span> <span class="k">public</span> <span class="n">MemPool</span> <span class="p">{</span></div><div class='line' id='LC435'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">AshmemPool</span><span class="p">(</span><span class="kt">int</span> <span class="n">buffer_size</span><span class="p">,</span> <span class="kt">int</span> <span class="n">num_buffers</span><span class="p">,</span></div><div class='line' id='LC436'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">frame_size</span><span class="p">,</span></div><div class='line' id='LC437'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC438'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC439'><br/></div><div class='line' id='LC440'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">PmemPool</span> <span class="o">:</span> <span class="k">public</span> <span class="n">MemPool</span> <span class="p">{</span></div><div class='line' id='LC441'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">PmemPool</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">pmem_pool</span><span class="p">,</span></div><div class='line' id='LC442'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">control_camera_fd</span><span class="p">,</span> <span class="kt">int</span> <span class="n">flags</span><span class="p">,</span> <span class="kt">int</span> <span class="n">pmem_type</span><span class="p">,</span></div><div class='line' id='LC443'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">buffer_size</span><span class="p">,</span> <span class="kt">int</span> <span class="n">num_buffers</span><span class="p">,</span></div><div class='line' id='LC444'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">frame_size</span><span class="p">,</span></div><div class='line' id='LC445'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC446'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="n">PmemPool</span><span class="p">();</span></div><div class='line' id='LC447'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mFd</span><span class="p">;</span></div><div class='line' id='LC448'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mPmemType</span><span class="p">;</span></div><div class='line' id='LC449'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mCameraControlFd</span><span class="p">;</span></div><div class='line' id='LC450'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint32_t</span> <span class="n">mAlignedSize</span><span class="p">;</span></div><div class='line' id='LC451'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">pmem_region</span> <span class="n">mSize</span><span class="p">;</span></div><div class='line' id='LC452'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC453'><br/></div><div class='line' id='LC454'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">PmemPool</span><span class="o">&gt;</span> <span class="n">mPreviewHeap</span><span class="p">;</span></div><div class='line' id='LC455'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">PmemPool</span><span class="o">&gt;</span> <span class="n">mRecordHeap</span><span class="p">;</span></div><div class='line' id='LC456'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">PmemPool</span><span class="o">&gt;</span> <span class="n">mThumbnailHeap</span><span class="p">;</span></div><div class='line' id='LC457'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">PmemPool</span><span class="o">&gt;</span> <span class="n">mRawHeap</span><span class="p">;</span></div><div class='line' id='LC458'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">PmemPool</span><span class="o">&gt;</span> <span class="n">mDisplayHeap</span><span class="p">;</span></div><div class='line' id='LC459'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">AshmemPool</span><span class="o">&gt;</span> <span class="n">mJpegHeap</span><span class="p">;</span></div><div class='line' id='LC460'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">PmemPool</span><span class="o">&gt;</span> <span class="n">mRawSnapShotPmemHeap</span><span class="p">;</span></div><div class='line' id='LC461'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">AshmemPool</span><span class="o">&gt;</span> <span class="n">mRawSnapshotAshmemHeap</span><span class="p">;</span></div><div class='line' id='LC462'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">PmemPool</span><span class="o">&gt;</span> <span class="n">mPostViewHeap</span><span class="p">;</span></div><div class='line' id='LC463'><br/></div><div class='line' id='LC464'><br/></div><div class='line' id='LC465'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">startCamera</span><span class="p">();</span></div><div class='line' id='LC466'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">initPreview</span><span class="p">();</span></div><div class='line' id='LC467'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">initRecord</span><span class="p">();</span></div><div class='line' id='LC468'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">deinitPreview</span><span class="p">();</span></div><div class='line' id='LC469'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">initRaw</span><span class="p">(</span><span class="kt">bool</span> <span class="n">initJpegHeap</span><span class="p">);</span></div><div class='line' id='LC470'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">initRawSnapshot</span><span class="p">();</span></div><div class='line' id='LC471'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">deinitRaw</span><span class="p">();</span></div><div class='line' id='LC472'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">deinitRawSnapshot</span><span class="p">();</span></div><div class='line' id='LC473'><br/></div><div class='line' id='LC474'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mFrameThreadRunning</span><span class="p">;</span></div><div class='line' id='LC475'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mFrameThreadWaitLock</span><span class="p">;</span></div><div class='line' id='LC476'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Condition</span> <span class="n">mFrameThreadWait</span><span class="p">;</span></div><div class='line' id='LC477'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">friend</span> <span class="kt">void</span> <span class="o">*</span><span class="n">frame_thread</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">);</span></div><div class='line' id='LC478'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">runFrameThread</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC479'><br/></div><div class='line' id='LC480'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//720p recording video thread</span></div><div class='line' id='LC481'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mVideoThreadExit</span><span class="p">;</span></div><div class='line' id='LC482'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mVideoThreadRunning</span><span class="p">;</span></div><div class='line' id='LC483'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mVideoThreadWaitLock</span><span class="p">;</span></div><div class='line' id='LC484'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Condition</span> <span class="n">mVideoThreadWait</span><span class="p">;</span></div><div class='line' id='LC485'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">friend</span> <span class="kt">void</span> <span class="o">*</span><span class="n">video_thread</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">);</span></div><div class='line' id='LC486'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">runVideoThread</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC487'><br/></div><div class='line' id='LC488'><br/></div><div class='line' id='LC489'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mShutterPending</span><span class="p">;</span></div><div class='line' id='LC490'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mShutterLock</span><span class="p">;</span></div><div class='line' id='LC491'><br/></div><div class='line' id='LC492'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mSnapshotThreadRunning</span><span class="p">;</span></div><div class='line' id='LC493'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mSnapshotThreadWaitLock</span><span class="p">;</span></div><div class='line' id='LC494'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Condition</span> <span class="n">mSnapshotThreadWait</span><span class="p">;</span></div><div class='line' id='LC495'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">friend</span> <span class="kt">void</span> <span class="o">*</span><span class="n">snapshot_thread</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">user</span><span class="p">);</span></div><div class='line' id='LC496'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">runSnapshotThread</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC497'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mRawPictureHeapLock</span><span class="p">;</span></div><div class='line' id='LC498'><br/></div><div class='line' id='LC499'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">debugShowPreviewFPS</span><span class="p">()</span> <span class="k">const</span><span class="p">;</span></div><div class='line' id='LC500'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">debugShowVideoFPS</span><span class="p">()</span> <span class="k">const</span><span class="p">;</span></div><div class='line' id='LC501'><br/></div><div class='line' id='LC502'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mSnapshotFormat</span><span class="p">;</span></div><div class='line' id='LC503'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">filterPictureSizes</span><span class="p">();</span></div><div class='line' id='LC504'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">filterPreviewSizes</span><span class="p">();</span></div><div class='line' id='LC505'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">storeTargetType</span><span class="p">();</span></div><div class='line' id='LC506'><br/></div><div class='line' id='LC507'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">initDefaultParameters</span><span class="p">();</span></div><div class='line' id='LC508'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">findSensorType</span><span class="p">();</span></div><div class='line' id='LC509'><br/></div><div class='line' id='LC510'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setPreviewSize</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC511'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setPictureSize</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC512'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setJpegQuality</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC513'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setAntibanding</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC514'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setEffect</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC515'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setAutoExposure</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC516'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setWhiteBalance</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC517'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setFlash</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC518'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setGpsLocation</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC519'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setRotation</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC520'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setZoom</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC521'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setFocusMode</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC522'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setBrightness</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC523'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setOrientation</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC524'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setLensshadeValue</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC525'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setISOValue</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC526'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setPictureFormat</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC527'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setSharpness</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC528'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setContrast</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC529'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">status_t</span> <span class="n">setSaturation</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">);</span></div><div class='line' id='LC530'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">setGpsParameters</span><span class="p">();</span></div><div class='line' id='LC531'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">storePreviewFrameForPostview</span><span class="p">();</span></div><div class='line' id='LC532'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">isValidDimension</span><span class="p">(</span><span class="kt">int</span> <span class="n">w</span><span class="p">,</span> <span class="kt">int</span> <span class="n">h</span><span class="p">);</span></div><div class='line' id='LC533'><br/></div><div class='line' id='LC534'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mLock</span><span class="p">;</span></div><div class='line' id='LC535'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mCamframeTimeoutLock</span><span class="p">;</span></div><div class='line' id='LC536'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">camframe_timeout_flag</span><span class="p">;</span></div><div class='line' id='LC537'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mReleasedRecordingFrame</span><span class="p">;</span></div><div class='line' id='LC538'><br/></div><div class='line' id='LC539'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">receiveRawPicture</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC540'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="n">receiveRawSnapshot</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC541'><br/></div><div class='line' id='LC542'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mCallbackLock</span><span class="p">;</span></div><div class='line' id='LC543'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mOverlayLock</span><span class="p">;</span></div><div class='line' id='LC544'>	<span class="n">Mutex</span> <span class="n">mRecordLock</span><span class="p">;</span></div><div class='line' id='LC545'>	<span class="n">Mutex</span> <span class="n">mRecordFrameLock</span><span class="p">;</span></div><div class='line' id='LC546'>	<span class="n">Condition</span> <span class="n">mRecordWait</span><span class="p">;</span></div><div class='line' id='LC547'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Condition</span> <span class="n">mStateWait</span><span class="p">;</span></div><div class='line' id='LC548'><br/></div><div class='line' id='LC549'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* mJpegSize keeps track of the size of the accumulated JPEG.  We clear it</span></div><div class='line' id='LC550'><span class="cm">       when we are about to take a picture, so at any time it contains either</span></div><div class='line' id='LC551'><span class="cm">       zero, or the size of the last JPEG picture taken.</span></div><div class='line' id='LC552'><span class="cm">    */</span></div><div class='line' id='LC553'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint32_t</span> <span class="n">mJpegSize</span><span class="p">;</span></div><div class='line' id='LC554'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span>        <span class="n">mPreviewFrameSize</span><span class="p">;</span></div><div class='line' id='LC555'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span>        <span class="n">mRecordFrameSize</span><span class="p">;</span></div><div class='line' id='LC556'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span>                 <span class="n">mRawSize</span><span class="p">;</span></div><div class='line' id='LC557'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span>                 <span class="n">mJpegMaxSize</span><span class="p">;</span></div><div class='line' id='LC558'><br/></div><div class='line' id='LC559'><span class="cp">#if DLOPEN_LIBMMCAMERA</span></div><div class='line' id='LC560'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">libmmcamera</span><span class="p">;</span></div><div class='line' id='LC561'><span class="cp">#endif</span></div><div class='line' id='LC562'><br/></div><div class='line' id='LC563'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mCameraControlFd</span><span class="p">;</span></div><div class='line' id='LC564'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">msm_camsensor_info</span> <span class="n">mSensorInfo</span><span class="p">;</span></div><div class='line' id='LC565'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">cam_ctrl_dimension_t</span> <span class="n">mDimension</span><span class="p">;</span></div><div class='line' id='LC566'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mAutoFocusThreadRunning</span><span class="p">;</span></div><div class='line' id='LC567'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mAutoFocusThreadLock</span><span class="p">;</span></div><div class='line' id='LC568'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mAutoFocusFd</span><span class="p">;</span></div><div class='line' id='LC569'><br/></div><div class='line' id='LC570'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Mutex</span> <span class="n">mAfLock</span><span class="p">;</span></div><div class='line' id='LC571'><br/></div><div class='line' id='LC572'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pthread_t</span> <span class="n">mFrameThread</span><span class="p">;</span></div><div class='line' id='LC573'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pthread_t</span> <span class="n">mVideoThread</span><span class="p">;</span></div><div class='line' id='LC574'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pthread_t</span> <span class="n">mSnapshotThread</span><span class="p">;</span></div><div class='line' id='LC575'><br/></div><div class='line' id='LC576'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">common_crop_t</span> <span class="n">mCrop</span><span class="p">;</span></div><div class='line' id='LC577'><br/></div><div class='line' id='LC578'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mBrightness</span><span class="p">;</span></div><div class='line' id='LC579'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mHJR</span><span class="p">;</span></div><div class='line' id='LC580'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">msm_frame</span> <span class="n">frames</span><span class="p">[</span><span class="n">kPreviewBufferCount</span><span class="p">];</span></div><div class='line' id='LC581'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">msm_frame</span> <span class="o">*</span><span class="n">recordframes</span><span class="p">;</span></div><div class='line' id='LC582'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="o">*</span><span class="n">record_buffers_tracking_flag</span><span class="p">;</span></div><div class='line' id='LC583'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mInPreviewCallback</span><span class="p">;</span></div><div class='line' id='LC584'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">mUseOverlay</span><span class="p">;</span></div><div class='line' id='LC585'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sp</span><span class="o">&lt;</span><span class="n">Overlay</span><span class="o">&gt;</span>  <span class="n">mOverlay</span><span class="p">;</span></div><div class='line' id='LC586'><br/></div><div class='line' id='LC587'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">int32_t</span> <span class="n">mMsgEnabled</span><span class="p">;</span>    <span class="c1">// camera msg to be handled</span></div><div class='line' id='LC588'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">notify_callback</span> <span class="n">mNotifyCallback</span><span class="p">;</span></div><div class='line' id='LC589'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback</span> <span class="n">mDataCallback</span><span class="p">;</span></div><div class='line' id='LC590'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback_timestamp</span> <span class="n">mDataCallbackTimestamp</span><span class="p">;</span></div><div class='line' id='LC591'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">mCallbackCookie</span><span class="p">;</span>  <span class="c1">// same for all callbacks</span></div><div class='line' id='LC592'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">mDebugFps</span><span class="p">;</span></div><div class='line' id='LC593'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">kPreviewBufferCountActual</span><span class="p">;</span></div><div class='line' id='LC594'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">previewWidth</span><span class="p">,</span> <span class="n">previewHeight</span><span class="p">;</span></div><div class='line' id='LC595'><span class="p">};</span></div><div class='line' id='LC596'><br/></div><div class='line' id='LC597'><span class="p">};</span> <span class="c1">// namespace android</span></div><div class='line' id='LC598'><br/></div><div class='line' id='LC599'><span class="cp">#endif</span></div><div class='line' id='LC600'><br/></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>
    </div>

  </div>

<div class="frame frame-loading" style="display:none;" data-tree-list-url="/thepasto/liquidCM_devicetree/tree-list/1800e3d784c27ad21390f87a8d09e97dec2ae9ab" data-blob-url-prefix="/thepasto/liquidCM_devicetree/blob/1800e3d784c27ad21390f87a8d09e97dec2ae9ab">
  <img src="https://a248.e.akamai.net/assets.github.com/images/modules/ajax/big_spinner_336699.gif?1302750674" height="32" width="32">
</div>

      </div>
    </div>


      <!-- footer -->
      <div id="footer" >
        
  <div class="upper_footer">
     <div class="container" class="clearfix">

       <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
       <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

       <ul class="footer_nav">
         <h4>GitHub</h4>
         <li><a href="https://github.com/about">About</a></li>
         <li><a href="https://github.com/blog">Blog</a></li>
         <li><a href="https://github.com/features">Features</a></li>
         <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
         <li><a href="https://github.com/training">Training</a></li>
         <li><a href="http://enterprise.github.com/">GitHub Enterprise</a></li>
         <li><a href="http://status.github.com/">Site Status</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Tools</h4>
         <li><a href="http://get.gaug.es/">Gauges: Analyze web traffic</a></li>
         <li><a href="http://speakerdeck.com">Speakerdeck: Presentations</a></li>
         <li><a href="https://gist.github.com">Gist: Code snippets</a></li>
         <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
         <li><a href="http://mobile.github.com/">Issues for iPhone</a></li>
         <li><a href="http://jobs.github.com/">Job Board</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Extras</h4>
         <li><a href="http://shop.github.com/">GitHub Shop</a></li>
         <li><a href="http://octodex.github.com/">The Octodex</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Documentation</h4>
         <li><a href="http://help.github.com/">GitHub Help</a></li>
         <li><a href="http://developer.github.com/">Developer API</a></li>
         <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
         <li><a href="http://pages.github.com/">GitHub Pages</a></li>
       </ul>

     </div><!-- /.site -->
  </div><!-- /.upper_footer -->

<div class="lower_footer">
  <div class="container" class="clearfix">
    <!--[if IE]><div id="legal_ie"><![endif]-->
    <![if !IE]><div id="legal"><![endif]>
      <ul>
          <li><a href="https://github.com/site/terms">Terms of Service</a></li>
          <li><a href="https://github.com/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2012 <span id="_rrt" title="0.19485s from fe5.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

      <div class="sponsor">
        <a href="http://www.rackspace.com" class="logo">
          <img alt="Dedicated Server" height="36" src="https://a248.e.akamai.net/assets.github.com/images/modules/footer/rackspace_logo.png?v2" width="38" />
        </a>
        Powered by the <a href="http://www.rackspace.com ">Dedicated
        Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
        Computing</a> of Rackspace Hosting<span>&reg;</span>
      </div>
  </div><!-- /.site -->
</div><!-- /.lower_footer -->

      </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selection as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selection as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selection from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div class="context-overlay"></div>

    <div class="ajax-error-message">
      <p><span class="icon"></span> Something went wrong with that request. Please try again. <a href="javascript:;" class="ajax-error-dismiss">Dismiss</a></p>
    </div>

    
    
    
  </body>
</html>

